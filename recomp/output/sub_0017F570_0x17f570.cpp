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

// Function: sub_0017F570
// Address: 0x17f570 - 0x17f628
void sub_0017F570_0x17f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F570_0x17f570");
#endif

    switch (ctx->pc) {
        case 0x17f5ccu: goto label_17f5cc;
        case 0x17f5d4u: goto label_17f5d4;
        case 0x17f5f0u: goto label_17f5f0;
        case 0x17f600u: goto label_17f600;
        case 0x17f60cu: goto label_17f60c;
        default: break;
    }

    ctx->pc = 0x17f570u;

    // 0x17f570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f584: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17f588: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f58c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17F58Cu;
    {
        const bool branch_taken_0x17f58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F58Cu;
        // 0x17f590: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f58c) {
            ctx->pc = 0x17F5E0u;
            goto label_17f5e0;
        }
    }
    ctx->pc = 0x17F594u;
    // 0x17f594: 0x92030412  lbu         $v1, 0x412($s0)
    ctx->pc = 0x17f594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1042)));
    // 0x17f598: 0x92050411  lbu         $a1, 0x411($s0)
    ctx->pc = 0x17f598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1041)));
    // 0x17f59c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17f5a0: 0xa2030413  sb          $v1, 0x413($s0)
    ctx->pc = 0x17f5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f5a4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x17f5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17f5a8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x17f5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17f5ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F5ACu;
    {
        const bool branch_taken_0x17f5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5ACu;
        // 0x17f5b0: 0xa2040412  sb          $a0, 0x412($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1042), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5ac) {
            ctx->pc = 0x17F5B8u;
            goto label_17f5b8;
        }
    }
    ctx->pc = 0x17F5B4u;
    // 0x17f5b4: 0xa2000412  sb          $zero, 0x412($s0)
    ctx->pc = 0x17f5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1042), (uint8_t)GPR_U32(ctx, 0));
label_17f5b8:
    // 0x17f5b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17f5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5c0: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x17f5c4: 0xc05fe76  jal         func_17F9D8
    ctx->pc = 0x17F5C4u;
    SET_GPR_U32(ctx, 31, 0x17F5CCu);
    ctx->pc = 0x17F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5C4u;
    // 0x17f5c8: 0xae030414  sw          $v1, 0x414($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9D8u, 0x17F5C4u, 0x17F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5CCu;
label_17f5cc:
    // 0x17f5cc: 0xc05fe92  jal         func_17FA48
    ctx->pc = 0x17F5CCu;
    SET_GPR_U32(ctx, 31, 0x17F5D4u);
    ctx->pc = 0x17F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5CCu;
    // 0x17f5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FA48u, 0x17F5CCu, 0x17F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5D4u;
label_17f5d4:
    // 0x17f5d4: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x17f5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x17f5d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F5D8u;
    {
        const bool branch_taken_0x17f5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5D8u;
        // 0x17f5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5d8) {
            ctx->pc = 0x17F5E8u;
            goto label_17f5e8;
        }
    }
    ctx->pc = 0x17F5E0u;
label_17f5e0:
    // 0x17f5e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17F5E0u;
    {
        const bool branch_taken_0x17f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5E0u;
        // 0x17f5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5e0) {
            ctx->pc = 0x17F610u;
            goto label_17f610;
        }
    }
    ctx->pc = 0x17F5E8u;
label_17f5e8:
    // 0x17f5e8: 0xc05ff18  jal         func_17FC60
    ctx->pc = 0x17F5E8u;
    SET_GPR_U32(ctx, 31, 0x17F5F0u);
    ctx->pc = 0x17F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5E8u;
    // 0x17f5ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC60u, 0x17F5E8u, 0x17F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5F0u;
label_17f5f0:
    // 0x17f5f0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F5F0u;
    {
        const bool branch_taken_0x17f5f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5F0u;
        // 0x17f5f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5f0) {
            ctx->pc = 0x17F600u;
            goto label_17f600;
        }
    }
    ctx->pc = 0x17F5F8u;
    // 0x17f5f8: 0xc060036  jal         func_1800D8
    ctx->pc = 0x17F5F8u;
    SET_GPR_U32(ctx, 31, 0x17F600u);
    ctx->pc = 0x17F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5F8u;
    // 0x17f5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800D8u, 0x17F5F8u, 0x17F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F600u;
label_17f600:
    // 0x17f600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f604: 0xc060098  jal         func_180260
    ctx->pc = 0x17F604u;
    SET_GPR_U32(ctx, 31, 0x17F60Cu);
    ctx->pc = 0x17F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F604u;
    // 0x17f608: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180260u, 0x17F604u, 0x17F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F60Cu;
label_17f60c:
    // 0x17f60c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x17f60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f610:
    // 0x17f610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f61c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17f61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f620: 0x3e00008  jr          $ra
    ctx->pc = 0x17F620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F620u;
        // 0x17f624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F628u;
}
