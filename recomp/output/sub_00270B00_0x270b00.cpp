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

// Function: sub_00270B00
// Address: 0x270b00 - 0x270b88
void sub_00270B00_0x270b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270B00_0x270b00");
#endif

    switch (ctx->pc) {
        case 0x270b00u: goto label_270b00;
        case 0x270b04u: goto label_270b04;
        case 0x270b08u: goto label_270b08;
        case 0x270b0cu: goto label_270b0c;
        case 0x270b10u: goto label_270b10;
        case 0x270b14u: goto label_270b14;
        case 0x270b18u: goto label_270b18;
        case 0x270b1cu: goto label_270b1c;
        case 0x270b20u: goto label_270b20;
        case 0x270b24u: goto label_270b24;
        case 0x270b28u: goto label_270b28;
        case 0x270b2cu: goto label_270b2c;
        case 0x270b30u: goto label_270b30;
        case 0x270b34u: goto label_270b34;
        case 0x270b38u: goto label_270b38;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b40u: goto label_270b40;
        case 0x270b44u: goto label_270b44;
        case 0x270b48u: goto label_270b48;
        case 0x270b4cu: goto label_270b4c;
        case 0x270b50u: goto label_270b50;
        case 0x270b54u: goto label_270b54;
        case 0x270b58u: goto label_270b58;
        case 0x270b5cu: goto label_270b5c;
        case 0x270b60u: goto label_270b60;
        case 0x270b64u: goto label_270b64;
        case 0x270b68u: goto label_270b68;
        case 0x270b6cu: goto label_270b6c;
        case 0x270b70u: goto label_270b70;
        case 0x270b74u: goto label_270b74;
        case 0x270b78u: goto label_270b78;
        case 0x270b7cu: goto label_270b7c;
        case 0x270b80u: goto label_270b80;
        case 0x270b84u: goto label_270b84;
        default: break;
    }

    ctx->pc = 0x270b00u;

label_270b00:
    // 0x270b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_270b04:
    // 0x270b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x270b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_270b08:
    // 0x270b08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x270b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_270b0c:
    // 0x270b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270b10:
    // 0x270b10: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x270b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_270b14:
    // 0x270b14: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_270b18:
    // 0x270b18: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x270b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_270b1c:
    // 0x270b1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_270b20:
    if (ctx->pc == 0x270B20u) {
        ctx->pc = 0x270B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B1Cu;
        // 0x270b20: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B24u;
        goto label_270b24;
    }
    ctx->pc = 0x270B1Cu;
    {
        const bool branch_taken_0x270b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B1Cu;
        // 0x270b20: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b1c) {
            ctx->pc = 0x270B2Cu;
            goto label_270b2c;
        }
    }
    ctx->pc = 0x270B24u;
label_270b24:
    // 0x270b24: 0x10000014  b           . + 4 + (0x14 << 2)
label_270b28:
    if (ctx->pc == 0x270B28u) {
        ctx->pc = 0x270B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B24u;
        // 0x270b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B2Cu;
        goto label_270b2c;
    }
    ctx->pc = 0x270B24u;
    {
        const bool branch_taken_0x270b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B24u;
        // 0x270b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b24) {
            ctx->pc = 0x270B78u;
            goto label_270b78;
        }
    }
    ctx->pc = 0x270B2Cu;
label_270b2c:
    // 0x270b2c: 0xc46c01b8  lwc1        $f12, 0x1B8($v1)
    ctx->pc = 0x270b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_270b30:
    // 0x270b30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_270b34:
    // 0x270b34: 0x0  nop
    ctx->pc = 0x270b34u;
    // NOP
label_270b38:
    // 0x270b38: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x270b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_270b3c:
    // 0x270b3c: 0x0  nop
    ctx->pc = 0x270b3cu;
    // NOP
label_270b40:
    // 0x270b40: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_270b44:
    if (ctx->pc == 0x270B44u) {
        ctx->pc = 0x270B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B40u;
        // 0x270b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B48u;
        goto label_270b48;
    }
    ctx->pc = 0x270B40u;
    {
        const bool branch_taken_0x270b40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B40u;
        // 0x270b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b40) {
            ctx->pc = 0x270B5Cu;
            goto label_270b5c;
        }
    }
    ctx->pc = 0x270B48u;
label_270b48:
    // 0x270b48: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x270b48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_270b4c:
    // 0x270b4c: 0xc084904  jal         func_212410
label_270b50:
    if (ctx->pc == 0x270B50u) {
        ctx->pc = 0x270B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B4Cu;
        // 0x270b50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B54u;
        goto label_270b54;
    }
    ctx->pc = 0x270B4Cu;
    SET_GPR_U32(ctx, 31, 0x270B54u);
    ctx->pc = 0x270B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B4Cu;
    // 0x270b50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212410u, 0x270B4Cu, 0x270B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B54u;
label_270b54:
    // 0x270b54: 0x10000009  b           . + 4 + (0x9 << 2)
label_270b58:
    if (ctx->pc == 0x270B58u) {
        ctx->pc = 0x270B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B54u;
        // 0x270b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B5Cu;
        goto label_270b5c;
    }
    ctx->pc = 0x270B54u;
    {
        const bool branch_taken_0x270b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B54u;
        // 0x270b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b54) {
            ctx->pc = 0x270B7Cu;
            goto label_270b7c;
        }
    }
    ctx->pc = 0x270B5Cu;
label_270b5c:
    // 0x270b5c: 0xc09bdce  jal         func_26F738
label_270b60:
    if (ctx->pc == 0x270B60u) {
        ctx->pc = 0x270B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B5Cu;
        // 0x270b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B64u;
        goto label_270b64;
    }
    ctx->pc = 0x270B5Cu;
    SET_GPR_U32(ctx, 31, 0x270B64u);
    ctx->pc = 0x270B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B5Cu;
    // 0x270b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F738u, 0x270B5Cu, 0x270B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B64u;
label_270b64:
    // 0x270b64: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x270b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_270b68:
    // 0x270b68: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x270b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_270b6c:
    // 0x270b6c: 0x40f809  jalr        $v0
label_270b70:
    if (ctx->pc == 0x270B70u) {
        ctx->pc = 0x270B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B6Cu;
        // 0x270b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B74u;
        goto label_270b74;
    }
    ctx->pc = 0x270B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270B74u);
        ctx->pc = 0x270B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B6Cu;
        // 0x270b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B6Cu, 0x270B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270B74u;
label_270b74:
    // 0x270b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270b78:
    // 0x270b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_270b7c:
    // 0x270b7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x270b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_270b80:
    // 0x270b80: 0x3e00008  jr          $ra
label_270b84:
    if (ctx->pc == 0x270B84u) {
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B88u;
        goto label_fallthrough_0x270b80;
    }
    ctx->pc = 0x270B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x270b80:
    ctx->pc = 0x270B88u;
}
