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

// Function: sub_001B1D90
// Address: 0x1b1d90 - 0x1b1e98
void sub_001B1D90_0x1b1d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1D90_0x1b1d90");
#endif

    switch (ctx->pc) {
        case 0x1b1de0u: goto label_1b1de0;
        case 0x1b1df8u: goto label_1b1df8;
        case 0x1b1e00u: goto label_1b1e00;
        case 0x1b1e10u: goto label_1b1e10;
        case 0x1b1e24u: goto label_1b1e24;
        case 0x1b1e54u: goto label_1b1e54;
        case 0x1b1e68u: goto label_1b1e68;
        case 0x1b1e84u: goto label_1b1e84;
        default: break;
    }

    ctx->pc = 0x1b1d90u;

    // 0x1b1d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1d98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1da0: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1b1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b1da4: 0x9483002a  lhu         $v1, 0x2A($a0)
    ctx->pc = 0x1b1da4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1b1da8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b1da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b1dac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1DACu;
    {
        const bool branch_taken_0x1b1dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DACu;
        // 0x1b1db0: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dac) {
            ctx->pc = 0x1B1DE8u;
            goto label_1b1de8;
        }
    }
    ctx->pc = 0x1B1DB4u;
    // 0x1b1db4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1DB4u;
    {
        const bool branch_taken_0x1b1db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1db4) {
            ctx->pc = 0x1B1DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1DB4u;
            // 0x1b1db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1DECu;
            goto label_1b1dec;
        }
    }
    ctx->pc = 0x1B1DBCu;
    // 0x1b1dbc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1b1dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1dc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1dc4: 0x0  nop
    ctx->pc = 0x1b1dc4u;
    // NOP
    // 0x1b1dc8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1b1dc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1dcc: 0x0  nop
    ctx->pc = 0x1b1dccu;
    // NOP
    // 0x1b1dd0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1DD0u;
    {
        const bool branch_taken_0x1b1dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1dd0) {
            ctx->pc = 0x1B1DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1DD0u;
            // 0x1b1dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1DECu;
            goto label_1b1dec;
        }
    }
    ctx->pc = 0x1B1DD8u;
    // 0x1b1dd8: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1B1DD8u;
    SET_GPR_U32(ctx, 31, 0x1B1DE0u);
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1B1DD8u, 0x1B1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE0u;
label_1b1de0:
    // 0x1b1de0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1DE0u;
    {
        const bool branch_taken_0x1b1de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1de0) {
            ctx->pc = 0x1B1DF8u;
            goto label_1b1df8;
        }
    }
    ctx->pc = 0x1B1DE8u;
label_1b1de8:
    // 0x1b1de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1dec:
    // 0x1b1dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1df0: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B1DF0u;
    SET_GPR_U32(ctx, 31, 0x1B1DF8u);
    ctx->pc = 0x1B1DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DF0u;
    // 0x1b1df4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B1DF0u, 0x1B1DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DF8u;
label_1b1df8:
    // 0x1b1df8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B1DF8u;
    SET_GPR_U32(ctx, 31, 0x1B1E00u);
    ctx->pc = 0x1B1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DF8u;
    // 0x1b1dfc: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B1DF8u, 0x1B1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E00u;
label_1b1e00:
    // 0x1b1e00: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1E00u;
    {
        const bool branch_taken_0x1b1e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e00) {
            ctx->pc = 0x1B1E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E00u;
            // 0x1b1e04: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E28u;
            goto label_1b1e28;
        }
    }
    ctx->pc = 0x1B1E08u;
    // 0x1b1e08: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B1E08u;
    SET_GPR_U32(ctx, 31, 0x1B1E10u);
    ctx->pc = 0x1B1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E08u;
    // 0x1b1e0c: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B1E08u, 0x1B1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E10u;
label_1b1e10:
    // 0x1b1e10: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1b1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1b1e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e18: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1b1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b1e1c: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E24u);
    ctx->pc = 0x1B1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E1Cu;
    // 0x1b1e20: 0xc46c0644  lwc1        $f12, 0x644($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B1E1Cu, 0x1B1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E24u;
label_1b1e24:
    // 0x1b1e24: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1b1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1b1e28:
    // 0x1b1e28: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1E28u;
    {
        const bool branch_taken_0x1b1e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E28u;
        // 0x1b1e2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e28) {
            ctx->pc = 0x1B1E84u;
            goto label_1b1e84;
        }
    }
    ctx->pc = 0x1B1E30u;
    // 0x1b1e30: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b1e34: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1E34u;
    {
        const bool branch_taken_0x1b1e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E34u;
        // 0x1b1e38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e34) {
            ctx->pc = 0x1B1E4Cu;
            goto label_1b1e4c;
        }
    }
    ctx->pc = 0x1B1E3Cu;
    // 0x1b1e3c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1E3Cu;
    {
        const bool branch_taken_0x1b1e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E3Cu;
        // 0x1b1e40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e3c) {
            ctx->pc = 0x1B1E4Cu;
            goto label_1b1e4c;
        }
    }
    ctx->pc = 0x1B1E44u;
    // 0x1b1e44: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1E44u;
    {
        const bool branch_taken_0x1b1e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1e44) {
            ctx->pc = 0x1B1E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E44u;
            // 0x1b1e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E88u;
            goto label_1b1e88;
        }
    }
    ctx->pc = 0x1B1E4Cu;
label_1b1e4c:
    // 0x1b1e4c: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1B1E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E54u);
    ctx->pc = 0x1B1E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E4Cu;
    // 0x1b1e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1B1E4Cu, 0x1B1E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E54u;
label_1b1e54:
    // 0x1b1e54: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1E54u;
    {
        const bool branch_taken_0x1b1e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e54) {
            ctx->pc = 0x1B1E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E54u;
            // 0x1b1e58: 0x8e030084  lw          $v1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E70u;
            goto label_1b1e70;
        }
    }
    ctx->pc = 0x1B1E5Cu;
    // 0x1b1e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e60: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1B1E60u;
    SET_GPR_U32(ctx, 31, 0x1B1E68u);
    ctx->pc = 0x1B1E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E60u;
    // 0x1b1e64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1B1E60u, 0x1B1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E68u;
label_1b1e68:
    // 0x1b1e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1E68u;
    {
        const bool branch_taken_0x1b1e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E68u;
        // 0x1b1e6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e68) {
            ctx->pc = 0x1B1E88u;
            goto label_1b1e88;
        }
    }
    ctx->pc = 0x1B1E70u;
label_1b1e70:
    // 0x1b1e70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1e74: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1E74u;
    {
        const bool branch_taken_0x1b1e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1e74) {
            ctx->pc = 0x1B1E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E74u;
            // 0x1b1e78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E88u;
            goto label_1b1e88;
        }
    }
    ctx->pc = 0x1B1E7Cu;
    // 0x1b1e7c: 0xc06b866  jal         func_1AE198
    ctx->pc = 0x1B1E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E84u);
    ctx->pc = 0x1B1E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E7Cu;
    // 0x1b1e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE198u, 0x1B1E7Cu, 0x1B1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E84u;
label_1b1e84:
    // 0x1b1e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1e88:
    // 0x1b1e88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E8Cu;
        // 0x1b1e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1E94u;
    // 0x1b1e94: 0x0  nop
    ctx->pc = 0x1b1e94u;
    // NOP
    ctx->pc = 0x1b1e98u;
}
