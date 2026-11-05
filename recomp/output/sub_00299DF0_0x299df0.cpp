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

// Function: sub_00299DF0
// Address: 0x299df0 - 0x299f50
void sub_00299DF0_0x299df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299DF0_0x299df0");
#endif

    switch (ctx->pc) {
        case 0x299e08u: goto label_299e08;
        case 0x299e2cu: goto label_299e2c;
        case 0x299e50u: goto label_299e50;
        case 0x299e58u: goto label_299e58;
        case 0x299e60u: goto label_299e60;
        case 0x299e68u: goto label_299e68;
        case 0x299e78u: goto label_299e78;
        case 0x299e9cu: goto label_299e9c;
        case 0x299ebcu: goto label_299ebc;
        case 0x299ec4u: goto label_299ec4;
        case 0x299eccu: goto label_299ecc;
        case 0x299ed4u: goto label_299ed4;
        case 0x299ee8u: goto label_299ee8;
        case 0x299f28u: goto label_299f28;
        case 0x299f38u: goto label_299f38;
        case 0x299f40u: goto label_299f40;
        default: break;
    }

    ctx->pc = 0x299df0u;

    // 0x299df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299df8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x299df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x299dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e00: 0xc0a1dea  jal         func_2877A8
    ctx->pc = 0x299E00u;
    SET_GPR_U32(ctx, 31, 0x299E08u);
    ctx->pc = 0x299E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E00u;
    // 0x299e04: 0xa2000088  sb          $zero, 0x88($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2877A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2877A8u, 0x299E00u, 0x299E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E08u;
label_299e08:
    // 0x299e08: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x299E08u;
    {
        const bool branch_taken_0x299e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E08u;
        // 0x299e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e08) {
            ctx->pc = 0x299E70u;
            goto label_299e70;
        }
    }
    ctx->pc = 0x299E10u;
    // 0x299e10: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x299e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x299e14: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x299e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x299e18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x299e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299e1c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x299e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x299e20: 0xa2020088  sb          $v0, 0x88($s0)
    ctx->pc = 0x299e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x299e24: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x299E24u;
    SET_GPR_U32(ctx, 31, 0x299E2Cu);
    ctx->pc = 0x299E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E24u;
    // 0x299e28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x299E24u, 0x299E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E2Cu;
label_299e2c:
    // 0x299e2c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x299e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x299e30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x299e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x299e34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299E34u;
    {
        const bool branch_taken_0x299e34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x299E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E34u;
        // 0x299e38: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e34) {
            ctx->pc = 0x299E48u;
            goto label_299e48;
        }
    }
    ctx->pc = 0x299E3Cu;
    // 0x299e3c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x299e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x299e40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x299e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x299e44: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x299e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_299e48:
    // 0x299e48: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299E48u;
    SET_GPR_U32(ctx, 31, 0x299E50u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299E48u, 0x299E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E50u;
label_299e50:
    // 0x299e50: 0xc0a723c  jal         func_29C8F0
    ctx->pc = 0x299E50u;
    SET_GPR_U32(ctx, 31, 0x299E58u);
    ctx->pc = 0x299E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E50u;
    // 0x299e54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8F0u, 0x299E50u, 0x299E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E58u;
label_299e58:
    // 0x299e58: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299E58u;
    SET_GPR_U32(ctx, 31, 0x299E60u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299E58u, 0x299E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E60u;
label_299e60:
    // 0x299e60: 0xc0a7244  jal         func_29C910
    ctx->pc = 0x299E60u;
    SET_GPR_U32(ctx, 31, 0x299E68u);
    ctx->pc = 0x299E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E60u;
    // 0x299e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x299E60u, 0x299E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E68u;
label_299e68:
    // 0x299e68: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x299E68u;
    {
        const bool branch_taken_0x299e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E68u;
        // 0x299e6c: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e68) {
            ctx->pc = 0x299ED8u;
            goto label_299ed8;
        }
    }
    ctx->pc = 0x299E70u;
label_299e70:
    // 0x299e70: 0xc0a1e2c  jal         func_2878B0
    ctx->pc = 0x299E70u;
    SET_GPR_U32(ctx, 31, 0x299E78u);
    ctx->pc = 0x2878B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2878B0u, 0x299E70u, 0x299E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E78u;
label_299e78:
    // 0x299e78: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x299E78u;
    {
        const bool branch_taken_0x299e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E78u;
        // 0x299e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e78) {
            ctx->pc = 0x299ED4u;
            goto label_299ed4;
        }
    }
    ctx->pc = 0x299E80u;
    // 0x299e80: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x299e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x299e84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x299e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x299e88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x299e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299e8c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x299e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x299e90: 0xa2020088  sb          $v0, 0x88($s0)
    ctx->pc = 0x299e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x299e94: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x299E94u;
    SET_GPR_U32(ctx, 31, 0x299E9Cu);
    ctx->pc = 0x299E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E94u;
    // 0x299e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x299E94u, 0x299E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E9Cu;
label_299e9c:
    // 0x299e9c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x299e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x299ea0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x299ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x299ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x299ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x299ea8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x299EA8u;
    {
        const bool branch_taken_0x299ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x299EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EA8u;
        // 0x299eac: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ea8) {
            ctx->pc = 0x299EB4u;
            goto label_299eb4;
        }
    }
    ctx->pc = 0x299EB0u;
    // 0x299eb0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x299eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_299eb4:
    // 0x299eb4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299EB4u;
    SET_GPR_U32(ctx, 31, 0x299EBCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299EB4u, 0x299EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EBCu;
label_299ebc:
    // 0x299ebc: 0xc0a723c  jal         func_29C8F0
    ctx->pc = 0x299EBCu;
    SET_GPR_U32(ctx, 31, 0x299EC4u);
    ctx->pc = 0x299EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299EBCu;
    // 0x299ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8F0u, 0x299EBCu, 0x299EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EC4u;
label_299ec4:
    // 0x299ec4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299EC4u;
    SET_GPR_U32(ctx, 31, 0x299ECCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299EC4u, 0x299ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299ECCu;
label_299ecc:
    // 0x299ecc: 0xc0a7244  jal         func_29C910
    ctx->pc = 0x299ECCu;
    SET_GPR_U32(ctx, 31, 0x299ED4u);
    ctx->pc = 0x299ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299ECCu;
    // 0x299ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x299ECCu, 0x299ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299ED4u;
label_299ed4:
    // 0x299ed4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x299ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_299ed8:
    // 0x299ed8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x299ED8u;
    {
        const bool branch_taken_0x299ed8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x299EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299ED8u;
        // 0x299edc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ed8) {
            ctx->pc = 0x299F08u;
            goto label_299f08;
        }
    }
    ctx->pc = 0x299EE0u;
    // 0x299ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ee4: 0x0  nop
    ctx->pc = 0x299ee4u;
    // NOP
label_299ee8:
    // 0x299ee8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x299ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x299eec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x299eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x299ef0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x299ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x299ef4: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x299ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x299ef8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x299ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x299efc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x299efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x299f00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299F00u;
    {
        const bool branch_taken_0x299f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F00u;
        // 0x299f04: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f00) {
            ctx->pc = 0x299EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299ee8;
        }
    }
    ctx->pc = 0x299F08u;
label_299f08:
    // 0x299f08: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x299f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x299f0c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x299f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x299f10: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x299f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x299f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x299f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299f18: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x299f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x299f1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x299f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x299f20: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x299F20u;
    SET_GPR_U32(ctx, 31, 0x299F28u);
    ctx->pc = 0x299F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F20u;
    // 0x299f24: 0xa0450060  sb          $a1, 0x60($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x299F20u, 0x299F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F28u;
label_299f28:
    // 0x299f28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299F28u;
    {
        const bool branch_taken_0x299f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F28u;
        // 0x299f2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f28) {
            ctx->pc = 0x299F44u;
            goto label_299f44;
        }
    }
    ctx->pc = 0x299F30u;
    // 0x299f30: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299F30u;
    SET_GPR_U32(ctx, 31, 0x299F38u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299F30u, 0x299F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F38u;
label_299f38:
    // 0x299f38: 0xc0a718a  jal         func_29C628
    ctx->pc = 0x299F38u;
    SET_GPR_U32(ctx, 31, 0x299F40u);
    ctx->pc = 0x299F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F38u;
    // 0x299f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C628u, 0x299F38u, 0x299F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F40u;
label_299f40:
    // 0x299f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299f44:
    // 0x299f44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x299f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299f48: 0x3e00008  jr          $ra
    ctx->pc = 0x299F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F48u;
        // 0x299f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F50u;
}
