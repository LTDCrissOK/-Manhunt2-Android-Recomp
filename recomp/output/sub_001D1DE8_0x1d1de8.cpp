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

// Function: sub_001D1DE8
// Address: 0x1d1de8 - 0x1d1f00
void sub_001D1DE8_0x1d1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1DE8_0x1d1de8");
#endif

    switch (ctx->pc) {
        case 0x1d1e18u: goto label_1d1e18;
        case 0x1d1e20u: goto label_1d1e20;
        case 0x1d1e4cu: goto label_1d1e4c;
        case 0x1d1e5cu: goto label_1d1e5c;
        case 0x1d1e7cu: goto label_1d1e7c;
        case 0x1d1e90u: goto label_1d1e90;
        case 0x1d1ea8u: goto label_1d1ea8;
        case 0x1d1ebcu: goto label_1d1ebc;
        case 0x1d1ec8u: goto label_1d1ec8;
        case 0x1d1edcu: goto label_1d1edc;
        default: break;
    }

    ctx->pc = 0x1d1de8u;

    // 0x1d1de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1df0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1df4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1df8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d1dfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d1dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d1e04: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x1d1e04u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x1d1e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1e0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d1e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1E10u;
    {
        const bool branch_taken_0x1d1e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E10u;
        // 0x1d1e14: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e10) {
            ctx->pc = 0x1D1E54u;
            goto label_1d1e54;
        }
    }
    ctx->pc = 0x1D1E18u;
label_1d1e18:
    // 0x1d1e18: 0xc0749ee  jal         func_1D27B8
    ctx->pc = 0x1D1E18u;
    SET_GPR_U32(ctx, 31, 0x1D1E20u);
    ctx->pc = 0x1D1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E18u;
    // 0x1d1e1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27B8u, 0x1D1E18u, 0x1D1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E20u;
label_1d1e20:
    // 0x1d1e20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e24: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d1e28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1e2c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d1e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d1e30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1E30u;
    {
        const bool branch_taken_0x1d1e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e30) {
            ctx->pc = 0x1D1E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1E30u;
            // 0x1d1e34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E54u;
            goto label_1d1e54;
        }
    }
    ctx->pc = 0x1D1E38u;
    // 0x1d1e38: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1d1e3c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1E3Cu;
    {
        const bool branch_taken_0x1d1e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e3c) {
            ctx->pc = 0x1D1E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1E3Cu;
            // 0x1d1e40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E54u;
            goto label_1d1e54;
        }
    }
    ctx->pc = 0x1D1E44u;
    // 0x1d1e44: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x1D1E44u;
    SET_GPR_U32(ctx, 31, 0x1D1E4Cu);
    ctx->pc = 0x1D1E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E44u;
    // 0x1d1e48: 0x26645ad0  addiu       $a0, $s3, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x1D1E44u, 0x1D1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E4Cu;
label_1d1e4c:
    // 0x1d1e4c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1d1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1d1e50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d1e54:
    // 0x1d1e54: 0xc0749e6  jal         func_1D2798
    ctx->pc = 0x1D1E54u;
    SET_GPR_U32(ctx, 31, 0x1D1E5Cu);
    ctx->pc = 0x1D1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E54u;
    // 0x1d1e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2798u, 0x1D1E54u, 0x1D1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E5Cu;
label_1d1e5c:
    // 0x1d1e5c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d1e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d1e60: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D1E60u;
    {
        const bool branch_taken_0x1d1e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E60u;
        // 0x1d1e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e60) {
            ctx->pc = 0x1D1E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1e18;
        }
    }
    ctx->pc = 0x1D1E68u;
    // 0x1d1e68: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d1e6c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1E6Cu;
    {
        const bool branch_taken_0x1d1e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e6c) {
            ctx->pc = 0x1D1E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1E6Cu;
            // 0x1d1e70: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E80u;
            goto label_1d1e80;
        }
    }
    ctx->pc = 0x1D1E74u;
    // 0x1d1e74: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D1E74u;
    SET_GPR_U32(ctx, 31, 0x1D1E7Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D1E74u, 0x1D1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E7Cu;
label_1d1e7c:
    // 0x1d1e7c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1d1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d1e80:
    // 0x1d1e80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1E80u;
    {
        const bool branch_taken_0x1d1e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E80u;
        // 0x1d1e84: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e80) {
            ctx->pc = 0x1D1E94u;
            goto label_1d1e94;
        }
    }
    ctx->pc = 0x1D1E88u;
    // 0x1d1e88: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x1D1E88u;
    SET_GPR_U32(ctx, 31, 0x1D1E90u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x1D1E88u, 0x1D1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E90u;
label_1d1e90:
    // 0x1d1e90: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1d1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1d1e94:
    // 0x1d1e94: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d1e98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1E98u;
    {
        const bool branch_taken_0x1d1e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e98) {
            ctx->pc = 0x1D1E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1E98u;
            // 0x1d1e9c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1EACu;
            goto label_1d1eac;
        }
    }
    ctx->pc = 0x1D1EA0u;
    // 0x1d1ea0: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x1D1EA0u;
    SET_GPR_U32(ctx, 31, 0x1D1EA8u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x1D1EA0u, 0x1D1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EA8u;
label_1d1ea8:
    // 0x1d1ea8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d1eac:
    // 0x1d1eac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1EACu;
    {
        const bool branch_taken_0x1d1eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1eac) {
            ctx->pc = 0x1D1EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1EACu;
            // 0x1d1eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1EC0u;
            goto label_1d1ec0;
        }
    }
    ctx->pc = 0x1D1EB4u;
    // 0x1d1eb4: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x1D1EB4u;
    SET_GPR_U32(ctx, 31, 0x1D1EBCu);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x1D1EB4u, 0x1D1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EBCu;
label_1d1ebc:
    // 0x1d1ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ec0:
    // 0x1d1ec0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D1EC0u;
    SET_GPR_U32(ctx, 31, 0x1D1EC8u);
    ctx->pc = 0x1D1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EC0u;
    // 0x1d1ec4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D1EC0u, 0x1D1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EC8u;
label_1d1ec8:
    // 0x1d1ec8: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1d1ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1d1ecc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1ECCu;
    {
        const bool branch_taken_0x1d1ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ECCu;
        // 0x1d1ed0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ecc) {
            ctx->pc = 0x1D1EE0u;
            goto label_1d1ee0;
        }
    }
    ctx->pc = 0x1D1ED4u;
    // 0x1d1ed4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D1ED4u;
    SET_GPR_U32(ctx, 31, 0x1D1EDCu);
    ctx->pc = 0x1D1ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ED4u;
    // 0x1d1ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D1ED4u, 0x1D1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EDCu;
label_1d1edc:
    // 0x1d1edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1ee0:
    // 0x1d1ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d1ee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1eec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d1eecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1ef0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d1ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d1ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EF4u;
        // 0x1d1ef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1EFCu;
    // 0x1d1efc: 0x0  nop
    ctx->pc = 0x1d1efcu;
    // NOP
    ctx->pc = 0x1d1f00u;
}
