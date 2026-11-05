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

// Function: sub_00319E00
// Address: 0x319e00 - 0x319f58
void sub_00319E00_0x319e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319E00_0x319e00");
#endif

    switch (ctx->pc) {
        case 0x319e00u: goto label_319e00;
        case 0x319e04u: goto label_319e04;
        case 0x319e08u: goto label_319e08;
        case 0x319e0cu: goto label_319e0c;
        case 0x319e10u: goto label_319e10;
        case 0x319e14u: goto label_319e14;
        case 0x319e18u: goto label_319e18;
        case 0x319e1cu: goto label_319e1c;
        case 0x319e20u: goto label_319e20;
        case 0x319e24u: goto label_319e24;
        case 0x319e28u: goto label_319e28;
        case 0x319e2cu: goto label_319e2c;
        case 0x319e30u: goto label_319e30;
        case 0x319e34u: goto label_319e34;
        case 0x319e38u: goto label_319e38;
        case 0x319e3cu: goto label_319e3c;
        case 0x319e40u: goto label_319e40;
        case 0x319e44u: goto label_319e44;
        case 0x319e48u: goto label_319e48;
        case 0x319e4cu: goto label_319e4c;
        case 0x319e50u: goto label_319e50;
        case 0x319e54u: goto label_319e54;
        case 0x319e58u: goto label_319e58;
        case 0x319e5cu: goto label_319e5c;
        case 0x319e60u: goto label_319e60;
        case 0x319e64u: goto label_319e64;
        case 0x319e68u: goto label_319e68;
        case 0x319e6cu: goto label_319e6c;
        case 0x319e70u: goto label_319e70;
        case 0x319e74u: goto label_319e74;
        case 0x319e78u: goto label_319e78;
        case 0x319e7cu: goto label_319e7c;
        case 0x319e80u: goto label_319e80;
        case 0x319e84u: goto label_319e84;
        case 0x319e88u: goto label_319e88;
        case 0x319e8cu: goto label_319e8c;
        case 0x319e90u: goto label_319e90;
        case 0x319e94u: goto label_319e94;
        case 0x319e98u: goto label_319e98;
        case 0x319e9cu: goto label_319e9c;
        case 0x319ea0u: goto label_319ea0;
        case 0x319ea4u: goto label_319ea4;
        case 0x319ea8u: goto label_319ea8;
        case 0x319eacu: goto label_319eac;
        case 0x319eb0u: goto label_319eb0;
        case 0x319eb4u: goto label_319eb4;
        case 0x319eb8u: goto label_319eb8;
        case 0x319ebcu: goto label_319ebc;
        case 0x319ec0u: goto label_319ec0;
        case 0x319ec4u: goto label_319ec4;
        case 0x319ec8u: goto label_319ec8;
        case 0x319eccu: goto label_319ecc;
        case 0x319ed0u: goto label_319ed0;
        case 0x319ed4u: goto label_319ed4;
        case 0x319ed8u: goto label_319ed8;
        case 0x319edcu: goto label_319edc;
        case 0x319ee0u: goto label_319ee0;
        case 0x319ee4u: goto label_319ee4;
        case 0x319ee8u: goto label_319ee8;
        case 0x319eecu: goto label_319eec;
        case 0x319ef0u: goto label_319ef0;
        case 0x319ef4u: goto label_319ef4;
        case 0x319ef8u: goto label_319ef8;
        case 0x319efcu: goto label_319efc;
        case 0x319f00u: goto label_319f00;
        case 0x319f04u: goto label_319f04;
        case 0x319f08u: goto label_319f08;
        case 0x319f0cu: goto label_319f0c;
        case 0x319f10u: goto label_319f10;
        case 0x319f14u: goto label_319f14;
        case 0x319f18u: goto label_319f18;
        case 0x319f1cu: goto label_319f1c;
        case 0x319f20u: goto label_319f20;
        case 0x319f24u: goto label_319f24;
        case 0x319f28u: goto label_319f28;
        case 0x319f2cu: goto label_319f2c;
        case 0x319f30u: goto label_319f30;
        case 0x319f34u: goto label_319f34;
        case 0x319f38u: goto label_319f38;
        case 0x319f3cu: goto label_319f3c;
        case 0x319f40u: goto label_319f40;
        case 0x319f44u: goto label_319f44;
        case 0x319f48u: goto label_319f48;
        case 0x319f4cu: goto label_319f4c;
        case 0x319f50u: goto label_319f50;
        case 0x319f54u: goto label_319f54;
        default: break;
    }

    ctx->pc = 0x319e00u;

label_319e00:
    // 0x319e00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_319e04:
    // 0x319e04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_319e08:
    // 0x319e08: 0x8c43bee8  lw          $v1, -0x4118($v0)
    ctx->pc = 0x319e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
label_319e0c:
    // 0x319e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x319e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_319e10:
    // 0x319e10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x319e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_319e14:
    // 0x319e14: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
label_319e18:
    if (ctx->pc == 0x319E18u) {
        ctx->pc = 0x319E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E14u;
        // 0x319e18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E1Cu;
        goto label_319e1c;
    }
    ctx->pc = 0x319E14u;
    {
        const bool branch_taken_0x319e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x319E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E14u;
        // 0x319e18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e14) {
            ctx->pc = 0x319F44u;
            goto label_319f44;
        }
    }
    ctx->pc = 0x319E1Cu;
label_319e1c:
    // 0x319e1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_319e20:
    // 0x319e20: 0x8c62bd5c  lw          $v0, -0x42A4($v1)
    ctx->pc = 0x319e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950236)));
label_319e24:
    // 0x319e24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_319e28:
    if (ctx->pc == 0x319E28u) {
        ctx->pc = 0x319E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E24u;
        // 0x319e28: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E2Cu;
        goto label_319e2c;
    }
    ctx->pc = 0x319E24u;
    {
        const bool branch_taken_0x319e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E24u;
        // 0x319e28: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e24) {
            ctx->pc = 0x319E78u;
            goto label_319e78;
        }
    }
    ctx->pc = 0x319E2Cu;
label_319e2c:
    // 0x319e2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_319e30:
    // 0x319e30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x319e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_319e34:
    // 0x319e34: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x319e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_319e38:
    // 0x319e38: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x319e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319e3c:
    // 0x319e3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x319e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319e40:
    // 0x319e40: 0x0  nop
    ctx->pc = 0x319e40u;
    // NOP
label_319e44:
    // 0x319e44: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_319e48:
    if (ctx->pc == 0x319E48u) {
        ctx->pc = 0x319E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E44u;
        // 0x319e48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E4Cu;
        goto label_319e4c;
    }
    ctx->pc = 0x319E44u;
    {
        const bool branch_taken_0x319e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E44u;
        // 0x319e48: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e44) {
            ctx->pc = 0x319E78u;
            goto label_319e78;
        }
    }
    ctx->pc = 0x319E4Cu;
label_319e4c:
    // 0x319e4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_319e50:
    // 0x319e50: 0x9203b822  lbu         $v1, -0x47DE($s0)
    ctx->pc = 0x319e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294948898)));
label_319e54:
    // 0x319e54: 0xae20bd5c  sw          $zero, -0x42A4($s1)
    ctx->pc = 0x319e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950236), GPR_U32(ctx, 0));
label_319e58:
    // 0x319e58: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_319e5c:
    if (ctx->pc == 0x319E5Cu) {
        ctx->pc = 0x319E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E58u;
        // 0x319e5c: 0xa040b821  sb          $zero, -0x47DF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948897), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E60u;
        goto label_319e60;
    }
    ctx->pc = 0x319E58u;
    {
        const bool branch_taken_0x319e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E58u;
        // 0x319e5c: 0xa040b821  sb          $zero, -0x47DF($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948897), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e58) {
            ctx->pc = 0x319F44u;
            goto label_319f44;
        }
    }
    ctx->pc = 0x319E60u;
label_319e60:
    // 0x319e60: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x319e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_319e64:
    // 0x319e64: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x319e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_319e68:
    // 0x319e68: 0x40f809  jalr        $v0
label_319e6c:
    if (ctx->pc == 0x319E6Cu) {
        ctx->pc = 0x319E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E68u;
        // 0x319e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E70u;
        goto label_319e70;
    }
    ctx->pc = 0x319E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x319E70u);
        ctx->pc = 0x319E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E68u;
        // 0x319e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319E68u, 0x319E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x319E70u;
label_319e70:
    // 0x319e70: 0x10000034  b           . + 4 + (0x34 << 2)
label_319e74:
    if (ctx->pc == 0x319E74u) {
        ctx->pc = 0x319E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E70u;
        // 0x319e74: 0xa200b822  sb          $zero, -0x47DE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294948898), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E78u;
        goto label_319e78;
    }
    ctx->pc = 0x319E70u;
    {
        const bool branch_taken_0x319e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E70u;
        // 0x319e74: 0xa200b822  sb          $zero, -0x47DE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294948898), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e70) {
            ctx->pc = 0x319F44u;
            goto label_319f44;
        }
    }
    ctx->pc = 0x319E78u;
label_319e78:
    // 0x319e78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_319e7c:
    // 0x319e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319e80:
    // 0x319e80: 0x8c44a4fc  lw          $a0, -0x5B04($v0)
    ctx->pc = 0x319e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943996)));
label_319e84:
    // 0x319e84: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_319e88:
    if (ctx->pc == 0x319E88u) {
        ctx->pc = 0x319E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E84u;
        // 0x319e88: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E8Cu;
        goto label_319e8c;
    }
    ctx->pc = 0x319E84u;
    {
        const bool branch_taken_0x319e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x319E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E84u;
        // 0x319e88: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e84) {
            ctx->pc = 0x319ECCu;
            goto label_319ecc;
        }
    }
    ctx->pc = 0x319E8Cu;
label_319e8c:
    // 0x319e8c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x319e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_319e90:
    // 0x319e90: 0x8ca3aa88  lw          $v1, -0x5578($a1)
    ctx->pc = 0x319e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945416)));
label_319e94:
    // 0x319e94: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_319e98:
    if (ctx->pc == 0x319E98u) {
        ctx->pc = 0x319E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E94u;
        // 0x319e98: 0x24465870  addiu       $a2, $v0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E9Cu;
        goto label_319e9c;
    }
    ctx->pc = 0x319E94u;
    {
        const bool branch_taken_0x319e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x319E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E94u;
        // 0x319e98: 0x24465870  addiu       $a2, $v0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e94) {
            ctx->pc = 0x319EA0u;
            goto label_319ea0;
        }
    }
    ctx->pc = 0x319E9Cu;
label_319e9c:
    // 0x319e9c: 0xaca4aa88  sw          $a0, -0x5578($a1)
    ctx->pc = 0x319e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294945416), GPR_U32(ctx, 4));
label_319ea0:
    // 0x319ea0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_319ea4:
    // 0x319ea4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x319ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_319ea8:
    // 0x319ea8: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x319ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_319eac:
    // 0x319eac: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x319eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319eb0:
    // 0x319eb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319eb4:
    // 0x319eb4: 0x0  nop
    ctx->pc = 0x319eb4u;
    // NOP
label_319eb8:
    // 0x319eb8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_319ebc:
    if (ctx->pc == 0x319EBCu) {
        ctx->pc = 0x319EC0u;
        goto label_319ec0;
    }
    ctx->pc = 0x319EB8u;
    {
        const bool branch_taken_0x319eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319eb8) {
            ctx->pc = 0x319ECCu;
            goto label_319ecc;
        }
    }
    ctx->pc = 0x319EC0u;
label_319ec0:
    // 0x319ec0: 0x90c2027c  lbu         $v0, 0x27C($a2)
    ctx->pc = 0x319ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 636)));
label_319ec4:
    // 0x319ec4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_319ec8:
    if (ctx->pc == 0x319EC8u) {
        ctx->pc = 0x319EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EC4u;
        // 0x319ec8: 0xae24bd5c  sw          $a0, -0x42A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319ECCu;
        goto label_319ecc;
    }
    ctx->pc = 0x319EC4u;
    {
        const bool branch_taken_0x319ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319ec4) {
            ctx->pc = 0x319EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319EC4u;
            // 0x319ec8: 0xae24bd5c  sw          $a0, -0x42A4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294950236), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319ECCu;
            goto label_319ecc;
        }
    }
    ctx->pc = 0x319ECCu;
label_319ecc:
    // 0x319ecc: 0xc0c6226  jal         func_318898
label_319ed0:
    if (ctx->pc == 0x319ED0u) {
        ctx->pc = 0x319ED4u;
        goto label_319ed4;
    }
    ctx->pc = 0x319ECCu;
    SET_GPR_U32(ctx, 31, 0x319ED4u);
    ctx->pc = 0x318898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318898u, 0x319ECCu, 0x319ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319ED4u;
label_319ed4:
    // 0x319ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_319ed8:
    if (ctx->pc == 0x319ED8u) {
        ctx->pc = 0x319ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319ED4u;
        // 0x319ed8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319EDCu;
        goto label_319edc;
    }
    ctx->pc = 0x319ED4u;
    {
        const bool branch_taken_0x319ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319ED4u;
        // 0x319ed8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ed4) {
            ctx->pc = 0x319EE8u;
            goto label_319ee8;
        }
    }
    ctx->pc = 0x319EDCu;
label_319edc:
    // 0x319edc: 0xc0c6770  jal         func_319DC0
label_319ee0:
    if (ctx->pc == 0x319EE0u) {
        ctx->pc = 0x319EE4u;
        goto label_319ee4;
    }
    ctx->pc = 0x319EDCu;
    SET_GPR_U32(ctx, 31, 0x319EE4u);
    ctx->pc = 0x319DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319DC0u, 0x319EDCu, 0x319EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EE4u;
label_319ee4:
    // 0x319ee4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_319ee8:
    // 0x319ee8: 0x8c43a7cc  lw          $v1, -0x5834($v0)
    ctx->pc = 0x319ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944716)));
label_319eec:
    // 0x319eec: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_319ef0:
    if (ctx->pc == 0x319EF0u) {
        ctx->pc = 0x319EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EECu;
        // 0x319ef0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319EF4u;
        goto label_319ef4;
    }
    ctx->pc = 0x319EECu;
    {
        const bool branch_taken_0x319eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x319EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EECu;
        // 0x319ef0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319eec) {
            ctx->pc = 0x319F48u;
            goto label_319f48;
        }
    }
    ctx->pc = 0x319EF4u;
label_319ef4:
    // 0x319ef4: 0xc0a033a  jal         func_280CE8
label_319ef8:
    if (ctx->pc == 0x319EF8u) {
        ctx->pc = 0x319EFCu;
        goto label_319efc;
    }
    ctx->pc = 0x319EF4u;
    SET_GPR_U32(ctx, 31, 0x319EFCu);
    ctx->pc = 0x280CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CE8u, 0x319EF4u, 0x319EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EFCu;
label_319efc:
    // 0x319efc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_319f00:
    if (ctx->pc == 0x319F00u) {
        ctx->pc = 0x319F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EFCu;
        // 0x319f00: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F04u;
        goto label_319f04;
    }
    ctx->pc = 0x319EFCu;
    {
        const bool branch_taken_0x319efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EFCu;
        // 0x319f00: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319efc) {
            ctx->pc = 0x319F44u;
            goto label_319f44;
        }
    }
    ctx->pc = 0x319F04u;
label_319f04:
    // 0x319f04: 0x8c43cb34  lw          $v1, -0x34CC($v0)
    ctx->pc = 0x319f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953780)));
label_319f08:
    // 0x319f08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_319f0c:
    if (ctx->pc == 0x319F0Cu) {
        ctx->pc = 0x319F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F08u;
        // 0x319f0c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F10u;
        goto label_319f10;
    }
    ctx->pc = 0x319F08u;
    {
        const bool branch_taken_0x319f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x319F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F08u;
        // 0x319f0c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f08) {
            ctx->pc = 0x319F38u;
            goto label_319f38;
        }
    }
    ctx->pc = 0x319F10u;
label_319f10:
    // 0x319f10: 0x8e22bd5c  lw          $v0, -0x42A4($s1)
    ctx->pc = 0x319f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950236)));
label_319f14:
    // 0x319f14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_319f18:
    if (ctx->pc == 0x319F18u) {
        ctx->pc = 0x319F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F14u;
        // 0x319f18: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F1Cu;
        goto label_319f1c;
    }
    ctx->pc = 0x319F14u;
    {
        const bool branch_taken_0x319f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F14u;
        // 0x319f18: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f14) {
            ctx->pc = 0x319F28u;
            goto label_319f28;
        }
    }
    ctx->pc = 0x319F1Cu;
label_319f1c:
    // 0x319f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319f20:
    // 0x319f20: 0x10000008  b           . + 4 + (0x8 << 2)
label_319f24:
    if (ctx->pc == 0x319F24u) {
        ctx->pc = 0x319F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F20u;
        // 0x319f24: 0xac62bda4  sw          $v0, -0x425C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F28u;
        goto label_319f28;
    }
    ctx->pc = 0x319F20u;
    {
        const bool branch_taken_0x319f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F20u;
        // 0x319f24: 0xac62bda4  sw          $v0, -0x425C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f20) {
            ctx->pc = 0x319F44u;
            goto label_319f44;
        }
    }
    ctx->pc = 0x319F28u;
label_319f28:
    // 0x319f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319f2c:
    // 0x319f2c: 0xae22bd5c  sw          $v0, -0x42A4($s1)
    ctx->pc = 0x319f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950236), GPR_U32(ctx, 2));
label_319f30:
    // 0x319f30: 0x10000004  b           . + 4 + (0x4 << 2)
label_319f34:
    if (ctx->pc == 0x319F34u) {
        ctx->pc = 0x319F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F30u;
        // 0x319f34: 0xac60bda4  sw          $zero, -0x425C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F38u;
        goto label_319f38;
    }
    ctx->pc = 0x319F30u;
    {
        const bool branch_taken_0x319f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F30u;
        // 0x319f34: 0xac60bda4  sw          $zero, -0x425C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f30) {
            ctx->pc = 0x319F44u;
            goto label_319f44;
        }
    }
    ctx->pc = 0x319F38u;
label_319f38:
    // 0x319f38: 0x8c43bda4  lw          $v1, -0x425C($v0)
    ctx->pc = 0x319f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950308)));
label_319f3c:
    // 0x319f3c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_319f40:
    if (ctx->pc == 0x319F40u) {
        ctx->pc = 0x319F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F3Cu;
        // 0x319f40: 0xae20bd5c  sw          $zero, -0x42A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F44u;
        goto label_319f44;
    }
    ctx->pc = 0x319F3Cu;
    {
        const bool branch_taken_0x319f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319f3c) {
            ctx->pc = 0x319F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319F3Cu;
            // 0x319f40: 0xae20bd5c  sw          $zero, -0x42A4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294950236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F44u;
            goto label_319f44;
        }
    }
    ctx->pc = 0x319F44u;
label_319f44:
    // 0x319f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_319f48:
    // 0x319f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x319f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_319f4c:
    // 0x319f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_319f50:
    // 0x319f50: 0x3e00008  jr          $ra
label_319f54:
    if (ctx->pc == 0x319F54u) {
        ctx->pc = 0x319F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F50u;
        // 0x319f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F58u;
        goto label_fallthrough_0x319f50;
    }
    ctx->pc = 0x319F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F50u;
        // 0x319f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x319f50:
    ctx->pc = 0x319F58u;
}
