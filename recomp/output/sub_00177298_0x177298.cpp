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

// Function: sub_00177298
// Address: 0x177298 - 0x177330
void sub_00177298_0x177298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177298_0x177298");
#endif

    switch (ctx->pc) {
        case 0x1772ccu: goto label_1772cc;
        case 0x1772f0u: goto label_1772f0;
        case 0x17731cu: goto label_17731c;
        default: break;
    }

    ctx->pc = 0x177298u;

    // 0x177298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17729c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x17729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1772a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1772a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1772a4: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x1772a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x1772a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1772a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1772ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1772acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1772b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1772b4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1772b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1772b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1772bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1772BCu;
    {
        const bool branch_taken_0x1772bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772BCu;
        // 0x1772c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772bc) {
            ctx->pc = 0x1772CCu;
            goto label_1772cc;
        }
    }
    ctx->pc = 0x1772C4u;
    // 0x1772c4: 0xc05dce2  jal         func_177388
    ctx->pc = 0x1772C4u;
    SET_GPR_U32(ctx, 31, 0x1772CCu);
    ctx->pc = 0x177388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177388u, 0x1772C4u, 0x1772CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772CCu;
label_1772cc:
    // 0x1772cc: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x1772ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1772d0: 0x2604015c  addiu       $a0, $s0, 0x15C
    ctx->pc = 0x1772d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x1772d4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1772D4u;
    {
        const bool branch_taken_0x1772d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772D4u;
        // 0x1772d8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772d4) {
            ctx->pc = 0x177308u;
            goto label_177308;
        }
    }
    ctx->pc = 0x1772DCu;
    // 0x1772dc: 0x260301dc  addiu       $v1, $s0, 0x1DC
    ctx->pc = 0x1772dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x1772e0: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1772E0u;
    {
        const bool branch_taken_0x1772e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1772e0) {
            ctx->pc = 0x1772E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1772E0u;
            // 0x1772e4: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17730Cu;
            goto label_17730c;
        }
    }
    ctx->pc = 0x1772E8u;
    // 0x1772e8: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1772e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1772ec: 0x0  nop
    ctx->pc = 0x1772ecu;
    // NOP
label_1772f0:
    // 0x1772f0: 0x0  nop
    ctx->pc = 0x1772f0u;
    // NOP
    // 0x1772f4: 0x0  nop
    ctx->pc = 0x1772f4u;
    // NOP
    // 0x1772f8: 0x0  nop
    ctx->pc = 0x1772f8u;
    // NOP
    // 0x1772fc: 0x0  nop
    ctx->pc = 0x1772fcu;
    // NOP
    // 0x177300: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x177300u;
    {
        const bool branch_taken_0x177300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x177300) {
            ctx->pc = 0x177304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177300u;
            // 0x177304: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1772F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1772f0;
        }
    }
    ctx->pc = 0x177308u;
label_177308:
    // 0x177308: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x177308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_17730c:
    // 0x17730c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17730Cu;
    {
        const bool branch_taken_0x17730c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x177310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17730Cu;
        // 0x177310: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17730c) {
            ctx->pc = 0x17731Cu;
            goto label_17731c;
        }
    }
    ctx->pc = 0x177314u;
    // 0x177314: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x177314u;
    SET_GPR_U32(ctx, 31, 0x17731Cu);
    ctx->pc = 0x177318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177314u;
    // 0x177318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x177314u, 0x17731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17731Cu;
label_17731c:
    // 0x17731c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17731cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177328: 0x3e00008  jr          $ra
    ctx->pc = 0x177328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177328u;
        // 0x17732c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177330u;
}
