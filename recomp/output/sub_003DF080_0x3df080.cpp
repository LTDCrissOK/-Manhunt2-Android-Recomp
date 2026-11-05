#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DF080
// Address: 0x3df080 - 0x3df138
void sub_003DF080_0x3df080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF080_0x3df080");
#endif

    switch (ctx->pc) {
        case 0x3df0b0u: goto label_3df0b0;
        case 0x3df0bcu: goto label_3df0bc;
        case 0x3df0c8u: goto label_3df0c8;
        case 0x3df0d4u: goto label_3df0d4;
        case 0x3df0e0u: goto label_3df0e0;
        case 0x3df0ecu: goto label_3df0ec;
        case 0x3df0f8u: goto label_3df0f8;
        case 0x3df104u: goto label_3df104;
        case 0x3df118u: goto label_3df118;
        default: break;
    }

    ctx->pc = 0x3df080u;

    // 0x3df080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3df084: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3df084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3df088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3df088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3df08c: 0x244217b8  addiu       $v0, $v0, 0x17B8
    ctx->pc = 0x3df08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6072));
    // 0x3df090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3df090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3df094: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3df094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3df09c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df0a0: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x3df0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x3df0a4: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x3df0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x3df0a8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0A8u;
    SET_GPR_U32(ctx, 31, 0x3DF0B0u);
    ctx->pc = 0x3DF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0A8u;
    // 0x3df0ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0A8u, 0x3DF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0B0u;
label_3df0b0:
    // 0x3df0b0: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x3df0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3df0b4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0B4u;
    SET_GPR_U32(ctx, 31, 0x3DF0BCu);
    ctx->pc = 0x3DF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0B4u;
    // 0x3df0b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0B4u, 0x3DF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0BCu;
label_3df0bc:
    // 0x3df0bc: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3df0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x3df0c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0C0u;
    SET_GPR_U32(ctx, 31, 0x3DF0C8u);
    ctx->pc = 0x3DF0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0C0u;
    // 0x3df0c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0C0u, 0x3DF0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0C8u;
label_3df0c8:
    // 0x3df0c8: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3df0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3df0cc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0CCu;
    SET_GPR_U32(ctx, 31, 0x3DF0D4u);
    ctx->pc = 0x3DF0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0CCu;
    // 0x3df0d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0CCu, 0x3DF0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0D4u;
label_3df0d4:
    // 0x3df0d4: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x3df0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x3df0d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0D8u;
    SET_GPR_U32(ctx, 31, 0x3DF0E0u);
    ctx->pc = 0x3DF0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0D8u;
    // 0x3df0dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0D8u, 0x3DF0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0E0u;
label_3df0e0:
    // 0x3df0e0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3df0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3df0e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0E4u;
    SET_GPR_U32(ctx, 31, 0x3DF0ECu);
    ctx->pc = 0x3DF0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0E4u;
    // 0x3df0e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0E4u, 0x3DF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0ECu;
label_3df0ec:
    // 0x3df0ec: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x3df0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x3df0f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0F0u;
    SET_GPR_U32(ctx, 31, 0x3DF0F8u);
    ctx->pc = 0x3DF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0F0u;
    // 0x3df0f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0F0u, 0x3DF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0F8u;
label_3df0f8:
    // 0x3df0f8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3df0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3df0fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DF0FCu;
    SET_GPR_U32(ctx, 31, 0x3DF104u);
    ctx->pc = 0x3DF100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0FCu;
    // 0x3df100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DF0FCu, 0x3DF104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF104u;
label_3df104:
    // 0x3df104: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3df104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3df108: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF108u;
    {
        const bool branch_taken_0x3df108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF108u;
        // 0x3df10c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df108) {
            ctx->pc = 0x3DF11Cu;
            goto label_3df11c;
        }
    }
    ctx->pc = 0x3DF110u;
    // 0x3df110: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DF110u;
    SET_GPR_U32(ctx, 31, 0x3DF118u);
    ctx->pc = 0x3DF114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF110u;
    // 0x3df114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DF110u, 0x3DF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF118u;
label_3df118:
    // 0x3df118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3df118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df11c:
    // 0x3df11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3df11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3df120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df124: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF124u;
        // 0x3df128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF12Cu;
    // 0x3df12c: 0x0  nop
    ctx->pc = 0x3df12cu;
    // NOP
    // 0x3df130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3df130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df134: 0x0  nop
    ctx->pc = 0x3df134u;
    // NOP
    ctx->pc = 0x3df138u;
}
