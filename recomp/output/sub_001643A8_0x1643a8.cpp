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

// Function: sub_001643A8
// Address: 0x1643a8 - 0x164458
void sub_001643A8_0x1643a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001643A8_0x1643a8");
#endif

    switch (ctx->pc) {
        case 0x1643e4u: goto label_1643e4;
        case 0x164410u: goto label_164410;
        case 0x16443cu: goto label_16443c;
        default: break;
    }

    ctx->pc = 0x1643a8u;

    // 0x1643a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1643ac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1643acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1643b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1643b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1643b4: 0x24420d80  addiu       $v0, $v0, 0xD80
    ctx->pc = 0x1643b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
    // 0x1643b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1643b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1643bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1643bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1643c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1643c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1643c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1643c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1643cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1643ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1643d0: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x1643d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1643d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1643D4u;
    {
        const bool branch_taken_0x1643d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643D4u;
        // 0x1643d8: 0x26120210  addiu       $s2, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643d4) {
            ctx->pc = 0x1643E4u;
            goto label_1643e4;
        }
    }
    ctx->pc = 0x1643DCu;
    // 0x1643dc: 0xc059130  jal         func_1644C0
    ctx->pc = 0x1643DCu;
    SET_GPR_U32(ctx, 31, 0x1643E4u);
    ctx->pc = 0x1644C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644C0u, 0x1643DCu, 0x1643E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1643E4u;
label_1643e4:
    // 0x1643e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1643e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1643e8: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x1643e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1643ec: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x1643ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x1643f0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1643f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1643f4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1643f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1643f8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1643F8u;
    {
        const bool branch_taken_0x1643f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643F8u;
        // 0x1643fc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643f8) {
            ctx->pc = 0x164428u;
            goto label_164428;
        }
    }
    ctx->pc = 0x164400u;
    // 0x164400: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x164400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164404: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164404u;
    {
        const bool branch_taken_0x164404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164404) {
            ctx->pc = 0x164408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164404u;
            // 0x164408: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16442Cu;
            goto label_16442c;
        }
    }
    ctx->pc = 0x16440Cu;
    // 0x16440c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x16440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_164410:
    // 0x164410: 0x0  nop
    ctx->pc = 0x164410u;
    // NOP
    // 0x164414: 0x0  nop
    ctx->pc = 0x164414u;
    // NOP
    // 0x164418: 0x0  nop
    ctx->pc = 0x164418u;
    // NOP
    // 0x16441c: 0x0  nop
    ctx->pc = 0x16441cu;
    // NOP
    // 0x164420: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x164420u;
    {
        const bool branch_taken_0x164420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x164420) {
            ctx->pc = 0x164424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164420u;
            // 0x164424: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164410;
        }
    }
    ctx->pc = 0x164428u;
label_164428:
    // 0x164428: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_16442c:
    // 0x16442c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16442Cu;
    {
        const bool branch_taken_0x16442c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x164430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16442Cu;
        // 0x164430: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16442c) {
            ctx->pc = 0x16443Cu;
            goto label_16443c;
        }
    }
    ctx->pc = 0x164434u;
    // 0x164434: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x164434u;
    SET_GPR_U32(ctx, 31, 0x16443Cu);
    ctx->pc = 0x164438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164434u;
    // 0x164438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x164434u, 0x16443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16443Cu;
label_16443c:
    // 0x16443c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16443cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164444: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164448: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16444c: 0x3e00008  jr          $ra
    ctx->pc = 0x16444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16444Cu;
        // 0x164450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164454u;
    // 0x164454: 0x0  nop
    ctx->pc = 0x164454u;
    // NOP
    ctx->pc = 0x164458u;
}
