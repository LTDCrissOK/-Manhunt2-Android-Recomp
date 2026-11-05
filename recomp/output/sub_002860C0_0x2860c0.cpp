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

// Function: sub_002860C0
// Address: 0x2860c0 - 0x286180
void sub_002860C0_0x2860c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002860C0_0x2860c0");
#endif

    switch (ctx->pc) {
        case 0x286100u: goto label_286100;
        case 0x286108u: goto label_286108;
        case 0x286110u: goto label_286110;
        case 0x28611cu: goto label_28611c;
        case 0x28612cu: goto label_28612c;
        case 0x286138u: goto label_286138;
        case 0x286144u: goto label_286144;
        default: break;
    }

    ctx->pc = 0x2860c0u;

    // 0x2860c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2860c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2860c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2860c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2860c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2860c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2860cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2860ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2860d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2860d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2860d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2860d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2860d8: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2860D8u;
    {
        const bool branch_taken_0x2860d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2860DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860D8u;
        // 0x2860dc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860d8) {
            ctx->pc = 0x286160u;
            goto label_286160;
        }
    }
    ctx->pc = 0x2860E0u;
    // 0x2860e0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2860E0u;
    {
        const bool branch_taken_0x2860e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860E0u;
        // 0x2860e4: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860e0) {
            ctx->pc = 0x286160u;
            goto label_286160;
        }
    }
    ctx->pc = 0x2860E8u;
    // 0x2860e8: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x2860e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2860ec: 0x2610f130  addiu       $s0, $s0, -0xED0
    ctx->pc = 0x2860ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963504));
    // 0x2860f0: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    // 0x2860f4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2860f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2860f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2860F8u;
    SET_GPR_U32(ctx, 31, 0x286100u);
    ctx->pc = 0x2860FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860F8u;
    // 0x2860fc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2860F8u, 0x286100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286100u;
label_286100:
    // 0x286100: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x286100u;
    SET_GPR_U32(ctx, 31, 0x286108u);
    ctx->pc = 0x286104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286100u;
    // 0x286104: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x286100u, 0x286108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286108u;
label_286108:
    // 0x286108: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x286108u;
    SET_GPR_U32(ctx, 31, 0x286110u);
    ctx->pc = 0x28610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286108u;
    // 0x28610c: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x286108u, 0x286110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286110u;
label_286110:
    // 0x286110: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x286110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x286114: 0xc0a891c  jal         func_2A2470
    ctx->pc = 0x286114u;
    SET_GPR_U32(ctx, 31, 0x28611Cu);
    ctx->pc = 0x286118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286114u;
    // 0x286118: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2470u, 0x286114u, 0x28611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28611Cu;
label_28611c:
    // 0x28611c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28611cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x286120: 0x2484f620  addiu       $a0, $a0, -0x9E0
    ctx->pc = 0x286120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
    // 0x286124: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x286124u;
    SET_GPR_U32(ctx, 31, 0x28612Cu);
    ctx->pc = 0x286128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286124u;
    // 0x286128: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x286124u, 0x28612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28612Cu;
label_28612c:
    // 0x28612c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x286130: 0x2450f6e0  addiu       $s0, $v0, -0x920
    ctx->pc = 0x286130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964960));
    // 0x286134: 0x0  nop
    ctx->pc = 0x286134u;
    // NOP
label_286138:
    // 0x286138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28613c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x28613Cu;
    SET_GPR_U32(ctx, 31, 0x286144u);
    ctx->pc = 0x286140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28613Cu;
    // 0x286140: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x28613Cu, 0x286144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286144u;
label_286144:
    // 0x286144: 0x0  nop
    ctx->pc = 0x286144u;
    // NOP
    // 0x286148: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x286148u;
    {
        const bool branch_taken_0x286148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x28614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286148u;
        // 0x28614c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286148) {
            ctx->pc = 0x286138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286138;
        }
    }
    ctx->pc = 0x286150u;
    // 0x286150: 0x2662fce0  addiu       $v0, $s3, -0x320
    ctx->pc = 0x286150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966496));
    // 0x286154: 0xae60fce0  sw          $zero, -0x320($s3)
    ctx->pc = 0x286154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966496), GPR_U32(ctx, 0));
    // 0x286158: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x286158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x28615c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28615cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_286160:
    // 0x286160: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x286160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286164: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x286164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286168: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28616c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x28616cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286170: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x286170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286174: 0x3e00008  jr          $ra
    ctx->pc = 0x286174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286174u;
        // 0x286178: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28617Cu;
    // 0x28617c: 0x0  nop
    ctx->pc = 0x28617cu;
    // NOP
    ctx->pc = 0x286180u;
}
