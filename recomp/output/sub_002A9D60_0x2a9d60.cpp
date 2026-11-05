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

// Function: sub_002A9D60
// Address: 0x2a9d60 - 0x2aa4a8
void sub_002A9D60_0x2a9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9D60_0x2a9d60");
#endif

    switch (ctx->pc) {
        case 0x2a9db8u: goto label_2a9db8;
        case 0x2a9dc4u: goto label_2a9dc4;
        case 0x2a9dfcu: goto label_2a9dfc;
        case 0x2a9e08u: goto label_2a9e08;
        case 0x2a9e14u: goto label_2a9e14;
        case 0x2a9e48u: goto label_2a9e48;
        case 0x2a9e78u: goto label_2a9e78;
        case 0x2aa064u: goto label_2aa064;
        case 0x2aa120u: goto label_2aa120;
        case 0x2aa3a0u: goto label_2aa3a0;
        case 0x2aa41cu: goto label_2aa41c;
        case 0x2aa424u: goto label_2aa424;
        case 0x2aa474u: goto label_2aa474;
        default: break;
    }

    ctx->pc = 0x2a9d60u;

    // 0x2a9d60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2a9d64: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2a9d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2a9d68: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x2a9d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x2a9d6c: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x2a9d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x2a9d70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9d74: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x2a9d74u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9d78: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2a9d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2a9d7c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2a9d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2a9d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a9d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d84: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2a9d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2a9d88: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2a9d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d8c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2a9d8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2a9d90: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a9d90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d94: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2a9d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2a9d98: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2a9d98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a9d9c: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2a9d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2a9da0: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2a9da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2a9da4: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x2a9da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x2a9da8: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x2a9da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x2a9dac: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x2a9dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2a9db0: 0xc0db198  jal         func_36C660
    ctx->pc = 0x2A9DB0u;
    SET_GPR_U32(ctx, 31, 0x2A9DB8u);
    ctx->pc = 0x2A9DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DB0u;
    // 0x2a9db4: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x2A9DB0u, 0x2A9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DB8u;
label_2a9db8:
    // 0x2a9db8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a9dbc: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x2A9DBCu;
    SET_GPR_U32(ctx, 31, 0x2A9DC4u);
    ctx->pc = 0x2A9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DBCu;
    // 0x2a9dc0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x2A9DBCu, 0x2A9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DC4u;
label_2a9dc4:
    // 0x2a9dc4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2a9dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a9dc8: 0x93b60000  lbu         $s6, 0x0($sp)
    ctx->pc = 0x2a9dc8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9dcc: 0x93b70001  lbu         $s7, 0x1($sp)
    ctx->pc = 0x2a9dccu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2a9dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9dd4: 0x93b30002  lbu         $s3, 0x2($sp)
    ctx->pc = 0x2a9dd4u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2a9dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a9dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ddc: 0x93b40003  lbu         $s4, 0x3($sp)
    ctx->pc = 0x2a9ddcu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2a9de0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a9de4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a9de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a9de8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2a9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2a9dec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2a9decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2a9df0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2a9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2a9df4: 0xc0aa55e  jal         func_2A9578
    ctx->pc = 0x2A9DF4u;
    SET_GPR_U32(ctx, 31, 0x2A9DFCu);
    ctx->pc = 0x2A9DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9DF4u;
    // 0x2a9df8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9578u, 0x2A9DF4u, 0x2A9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DFCu;
label_2a9dfc:
    // 0x2a9dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a9dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e00: 0xc0aa570  jal         func_2A95C0
    ctx->pc = 0x2A9E00u;
    SET_GPR_U32(ctx, 31, 0x2A9E08u);
    ctx->pc = 0x2A9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E00u;
    // 0x2a9e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A95C0u, 0x2A9E00u, 0x2A9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E08u;
label_2a9e08:
    // 0x2a9e08: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2a9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2a9e0c: 0xc0aadc8  jal         func_2AB720
    ctx->pc = 0x2A9E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A9E14u);
    ctx->pc = 0x2A9E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9E0Cu;
    // 0x2a9e10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB720u, 0x2A9E0Cu, 0x2A9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9E14u;
label_2a9e14:
    // 0x2a9e14: 0x26280070  addiu       $t0, $s1, 0x70
    ctx->pc = 0x2a9e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2a9e18: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2A9E18u;
    {
        const bool branch_taken_0x2a9e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E18u;
        // 0x2a9e1c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e18) {
            ctx->pc = 0x2AA07Cu;
            goto label_2aa07c;
        }
    }
    ctx->pc = 0x2A9E20u;
    // 0x2a9e20: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2a9e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9e24: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a9e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e28: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2a9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a9e2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a9e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e30: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2a9e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a9e34: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2a9e34u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2a9e38: 0x26290078  addiu       $t1, $s1, 0x78
    ctx->pc = 0x2a9e38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2a9e3c: 0x1086000c  beq         $a0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2A9E3Cu;
    {
        const bool branch_taken_0x2a9e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2A9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E3Cu;
        // 0x2a9e40: 0x262a0080  addiu       $t2, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e3c) {
            ctx->pc = 0x2A9E70u;
            goto label_2a9e70;
        }
    }
    ctx->pc = 0x2A9E44u;
    // 0x2a9e44: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x2a9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2a9e48:
    // 0x2a9e48: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9E48u;
    {
        const bool branch_taken_0x2a9e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2A9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E48u;
        // 0x2a9e4c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e48) {
            ctx->pc = 0x2A9E64u;
            goto label_2a9e64;
        }
    }
    ctx->pc = 0x2A9E50u;
    // 0x2a9e50: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2a9e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9e58: 0x0  nop
    ctx->pc = 0x2a9e58u;
    // NOP
    // 0x2a9e5c: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2A9E5Cu;
    {
        const bool branch_taken_0x2a9e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9e5c) {
            ctx->pc = 0x2A9E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9E5Cu;
            // 0x2a9e60: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9EBCu;
            goto label_2a9ebc;
        }
    }
    ctx->pc = 0x2A9E64u;
label_2a9e64:
    // 0x2a9e64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a9e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e68: 0x1486fff7  bne         $a0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A9E68u;
    {
        const bool branch_taken_0x2a9e68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2A9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E68u;
        // 0x2a9e6c: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e68) {
            ctx->pc = 0x2A9E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9e48;
        }
    }
    ctx->pc = 0x2A9E70u;
label_2a9e70:
    // 0x2a9e70: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9e74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a9e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2a9e78:
    // 0x2a9e78: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a9e7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a9e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a9e80: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A9E80u;
    {
        const bool branch_taken_0x2a9e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E80u;
        // 0x2a9e84: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e80) {
            ctx->pc = 0x2A9F0Cu;
            goto label_2a9f0c;
        }
    }
    ctx->pc = 0x2A9E88u;
    // 0x2a9e88: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a9e8c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9e90: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a9e94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9e98: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9e9c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2a9e9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9ea0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2a9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a9ea4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2a9ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a9ea8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9EA8u;
    {
        const bool branch_taken_0x2a9ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EA8u;
        // 0x2a9eac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ea8) {
            ctx->pc = 0x2A9ED4u;
            goto label_2a9ed4;
        }
    }
    ctx->pc = 0x2A9EB0u;
    // 0x2a9eb0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2a9eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9eb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9EB4u;
    {
        const bool branch_taken_0x2a9eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EB4u;
        // 0x2a9eb8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9eb4) {
            ctx->pc = 0x2A9EDCu;
            goto label_2a9edc;
        }
    }
    ctx->pc = 0x2A9EBCu;
label_2a9ebc:
    // 0x2a9ebc: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2a9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9ec0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a9ec4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2a9ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2a9ec8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2a9ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a9ecc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A9ECCu;
    {
        const bool branch_taken_0x2a9ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9ECCu;
        // 0x2a9ed0: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ecc) {
            ctx->pc = 0x2A9E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9e78;
        }
    }
    ctx->pc = 0x2A9ED4u;
label_2a9ed4:
    // 0x2a9ed4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2a9ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a9ed8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2a9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a9edc:
    // 0x2a9edc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9ee0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2a9ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ee4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x2a9ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2a9ee8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a9ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9eec: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2a9eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2a9ef0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a9ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9ef4: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x2a9ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2a9ef8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2a9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9efc: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x2a9efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2a9f00: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2a9f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9f04: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2A9F04u;
    {
        const bool branch_taken_0x2a9f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F04u;
        // 0x2a9f08: 0xe5210010  swc1        $f1, 0x10($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f04) {
            ctx->pc = 0x2AA0D8u;
            goto label_2aa0d8;
        }
    }
    ctx->pc = 0x2A9F0Cu;
label_2a9f0c:
    // 0x2a9f0c: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9f10: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a9f14: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a9f18: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9f1c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9f20: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2a9f20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9f24: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2a9f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a9f28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9F28u;
    {
        const bool branch_taken_0x2a9f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F28u;
        // 0x2a9f2c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f28) {
            ctx->pc = 0x2A9F38u;
            goto label_2a9f38;
        }
    }
    ctx->pc = 0x2A9F30u;
    // 0x2a9f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9F30u;
    {
        const bool branch_taken_0x2a9f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F30u;
        // 0x2a9f34: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f30) {
            ctx->pc = 0x2A9F3Cu;
            goto label_2a9f3c;
        }
    }
    ctx->pc = 0x2A9F38u;
label_2a9f38:
    // 0x2a9f38: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2a9f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a9f3c:
    // 0x2a9f3c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2a9f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a9f40: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2a9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a9f44: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a9f48: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2a9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a9f4c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a9f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a9f50: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2a9f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a9f54: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9f58: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9f5c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2a9f5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a9f60: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2a9f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a9f64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9F64u;
    {
        const bool branch_taken_0x2a9f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F64u;
        // 0x2a9f68: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f64) {
            ctx->pc = 0x2A9F78u;
            goto label_2a9f78;
        }
    }
    ctx->pc = 0x2A9F6Cu;
    // 0x2a9f6c: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2a9f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a9f70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9F70u;
    {
        const bool branch_taken_0x2a9f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F70u;
        // 0x2a9f74: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f70) {
            ctx->pc = 0x2A9F80u;
            goto label_2a9f80;
        }
    }
    ctx->pc = 0x2A9F78u;
label_2a9f78:
    // 0x2a9f78: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2a9f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a9f7c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2a9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2a9f80:
    // 0x2a9f80: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2a9f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9f84: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2a9f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9f88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a9f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9f8c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a9f8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a9f90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9f94: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a9f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a9f98: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2a9f98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9f9c: 0x0  nop
    ctx->pc = 0x2a9f9cu;
    // NOP
    // 0x2a9fa0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9FA0u;
    {
        const bool branch_taken_0x2a9fa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FA0u;
        // 0x2a9fa4: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9fa0) {
            ctx->pc = 0x2A9FB4u;
            goto label_2a9fb4;
        }
    }
    ctx->pc = 0x2A9FA8u;
    // 0x2a9fa8: 0x0  nop
    ctx->pc = 0x2a9fa8u;
    // NOP
    // 0x2a9fac: 0x0  nop
    ctx->pc = 0x2a9facu;
    // NOP
    // 0x2a9fb0: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2a9fb0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2a9fb4:
    // 0x2a9fb4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2a9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9fb8: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2a9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a9fbc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2a9fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9fc0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a9fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9fc4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a9fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9fc8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a9fc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a9fcc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a9fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a9fd0: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2a9fd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2a9fd4: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2a9fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a9fd8: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2a9fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a9fdc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a9fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a9fe0: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2a9fe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a9fe4: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2a9fe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a9fe8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a9fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9fec: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9ff0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a9ff0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a9ff4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a9ff4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a9ff8: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2a9ff8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a9ffc: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2a9ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2aa000: 0xe5030008  swc1        $f3, 0x8($t0)
    ctx->pc = 0x2aa000u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2aa004: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2aa004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa008: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2aa008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2aa00c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2aa00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa010: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2aa010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa014: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aa014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa018: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2aa018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa01c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa020: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aa020u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aa024: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2aa024u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aa028: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2aa028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2aa02c: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2aa02cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aa030: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2aa030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2aa034: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2aa034u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2aa038: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x2aa038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2aa03c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2aa03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa040: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa044: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2aa044u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2aa048: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aa048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aa04c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2aa04cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aa050: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2aa050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2aa054: 0xe5040010  swc1        $f4, 0x10($t0)
    ctx->pc = 0x2aa054u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2aa058: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2aa058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa05c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2AA05Cu;
    {
        const bool branch_taken_0x2aa05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA05Cu;
        // 0x2aa060: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa05c) {
            ctx->pc = 0x2AA0D4u;
            goto label_2aa0d4;
        }
    }
    ctx->pc = 0x2AA064u;
label_2aa064:
    // 0x2aa064: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2aa064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa068: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2aa068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2aa06c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2aa06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aa070: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2aa070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aa074: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2AA074u;
    {
        const bool branch_taken_0x2aa074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA074u;
        // 0x2aa078: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa074) {
            ctx->pc = 0x2AA150u;
            goto label_2aa150;
        }
    }
    ctx->pc = 0x2AA07Cu;
label_2aa07c:
    // 0x2aa07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa084: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x2aa084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2aa088: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2aa088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2aa08c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2aa08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2aa090: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2aa090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2aa094: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2aa094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2aa098: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2aa098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2aa09c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2aa09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa0a0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2aa0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2aa0a4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2aa0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa0a8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2aa0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2aa0ac: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2aa0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa0b0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2aa0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa0b4: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2aa0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2aa0b8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aa0bc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2aa0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa0c0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2aa0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa0c4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2aa0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa0c8: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2aa0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2aa0cc: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2aa0ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2aa0d0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x2aa0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2aa0d4:
    // 0x2aa0d4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2aa0d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2aa0d8:
    // 0x2aa0d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2aa0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa0dc: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x2aa0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2aa0e0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2aa0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2aa0e4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2aa0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa0e8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2aa0e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2aa0ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2aa0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2aa0f0: 0x10c0008c  beqz        $a2, . + 4 + (0x8C << 2)
    ctx->pc = 0x2AA0F0u;
    {
        const bool branch_taken_0x2aa0f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0F0u;
        // 0x2aa0f4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0f0) {
            ctx->pc = 0x2AA324u;
            goto label_2aa324;
        }
    }
    ctx->pc = 0x2AA0F8u;
    // 0x2aa0f8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2aa0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa0fc: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2aa0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2aa100: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2aa100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2aa104: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2aa104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2aa108: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2aa108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2aa10c: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2aa10cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2aa110: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2AA110u;
    {
        const bool branch_taken_0x2aa110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA110u;
        // 0x2aa114: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa110) {
            ctx->pc = 0x2AA148u;
            goto label_2aa148;
        }
    }
    ctx->pc = 0x2AA118u;
    // 0x2aa118: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2aa118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2aa11c: 0x0  nop
    ctx->pc = 0x2aa11cu;
    // NOP
label_2aa120:
    // 0x2aa120: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA120u;
    {
        const bool branch_taken_0x2aa120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2AA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA120u;
        // 0x2aa124: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa120) {
            ctx->pc = 0x2AA13Cu;
            goto label_2aa13c;
        }
    }
    ctx->pc = 0x2AA128u;
    // 0x2aa128: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2aa128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa12c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aa12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa130: 0x0  nop
    ctx->pc = 0x2aa130u;
    // NOP
    // 0x2aa134: 0x4503ffcb  bc1tl       . + 4 + (-0x35 << 2)
    ctx->pc = 0x2AA134u;
    {
        const bool branch_taken_0x2aa134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aa134) {
            ctx->pc = 0x2AA138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA134u;
            // 0x2aa138: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa064;
        }
    }
    ctx->pc = 0x2AA13Cu;
label_2aa13c:
    // 0x2aa13c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2aa13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa140: 0x1485fff7  bne         $a0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AA140u;
    {
        const bool branch_taken_0x2aa140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA140u;
        // 0x2aa144: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa140) {
            ctx->pc = 0x2AA120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa120;
        }
    }
    ctx->pc = 0x2AA148u;
label_2aa148:
    // 0x2aa148: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2aa148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2aa14c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2aa14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2aa150:
    // 0x2aa150: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2aa150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2aa154: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2aa154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2aa158: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AA158u;
    {
        const bool branch_taken_0x2aa158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA158u;
        // 0x2aa15c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa158) {
            ctx->pc = 0x2AA1CCu;
            goto label_2aa1cc;
        }
    }
    ctx->pc = 0x2AA160u;
    // 0x2aa160: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aa160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aa164: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aa164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa168: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aa168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aa16c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aa16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa170: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aa170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa174: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2aa174u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aa178: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2aa178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2aa17c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2aa17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2aa180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA180u;
    {
        const bool branch_taken_0x2aa180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA180u;
        // 0x2aa184: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa180) {
            ctx->pc = 0x2AA194u;
            goto label_2aa194;
        }
    }
    ctx->pc = 0x2AA188u;
    // 0x2aa188: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2aa188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2aa18c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA18Cu;
    {
        const bool branch_taken_0x2aa18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA18Cu;
        // 0x2aa190: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa18c) {
            ctx->pc = 0x2AA19Cu;
            goto label_2aa19c;
        }
    }
    ctx->pc = 0x2AA194u;
label_2aa194:
    // 0x2aa194: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2aa194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa198: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2aa198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2aa19c:
    // 0x2aa19c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2aa19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa1a0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2aa1a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1a4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2aa1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aa1a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2aa1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa1ac: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2aa1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2aa1b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2aa1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa1b4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2aa1b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2aa1b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2aa1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa1bc: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2aa1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2aa1c0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2aa1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa1c4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2AA1C4u;
    {
        const bool branch_taken_0x2aa1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1C4u;
        // 0x2aa1c8: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1c4) {
            ctx->pc = 0x2AA37Cu;
            goto label_2aa37c;
        }
    }
    ctx->pc = 0x2AA1CCu;
label_2aa1cc:
    // 0x2aa1cc: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aa1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa1d0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aa1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aa1d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aa1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aa1d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa1dc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aa1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa1e0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2aa1e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aa1e4: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x2aa1e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2aa1e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA1E8u;
    {
        const bool branch_taken_0x2aa1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1E8u;
        // 0x2aa1ec: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1e8) {
            ctx->pc = 0x2AA1F8u;
            goto label_2aa1f8;
        }
    }
    ctx->pc = 0x2AA1F0u;
    // 0x2aa1f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA1F0u;
    {
        const bool branch_taken_0x2aa1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1F0u;
        // 0x2aa1f4: 0x821818  mult        $v1, $a0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1f0) {
            ctx->pc = 0x2AA1FCu;
            goto label_2aa1fc;
        }
    }
    ctx->pc = 0x2AA1F8u;
label_2aa1f8:
    // 0x2aa1f8: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2aa1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2aa1fc:
    // 0x2aa1fc: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2aa1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aa200: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2aa200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2aa204: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2aa204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2aa208: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2aa208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2aa20c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2aa20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2aa210: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2aa210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2aa214: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2aa214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa218: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2aa218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2aa21c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2aa21cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2aa220: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x2aa220u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2aa224: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA224u;
    {
        const bool branch_taken_0x2aa224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA224u;
        // 0x2aa228: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa224) {
            ctx->pc = 0x2AA238u;
            goto label_2aa238;
        }
    }
    ctx->pc = 0x2AA22Cu;
    // 0x2aa22c: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x2aa22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2aa230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA230u;
    {
        const bool branch_taken_0x2aa230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA230u;
        // 0x2aa234: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa230) {
            ctx->pc = 0x2AA240u;
            goto label_2aa240;
        }
    }
    ctx->pc = 0x2AA238u;
label_2aa238:
    // 0x2aa238: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2aa238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2aa23c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2aa23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2aa240:
    // 0x2aa240: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2aa240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa244: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2aa244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa248: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2aa248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa24c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2aa24cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2aa250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa254: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aa254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aa258: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2aa258u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa25c: 0x0  nop
    ctx->pc = 0x2aa25cu;
    // NOP
    // 0x2aa260: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA260u;
    {
        const bool branch_taken_0x2aa260 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA260u;
        // 0x2aa264: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa260) {
            ctx->pc = 0x2AA274u;
            goto label_2aa274;
        }
    }
    ctx->pc = 0x2AA268u;
    // 0x2aa268: 0x0  nop
    ctx->pc = 0x2aa268u;
    // NOP
    // 0x2aa26c: 0x0  nop
    ctx->pc = 0x2aa26cu;
    // NOP
    // 0x2aa270: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x2aa270u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2aa274:
    // 0x2aa274: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2aa274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa278: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2aa278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2aa27c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2aa27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa280: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2aa280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa284: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2aa284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa288: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aa288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aa28c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa28cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa290: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x2aa290u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aa294: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2aa294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2aa298: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x2aa298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aa29c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2aa29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2aa2a0: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2aa2a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2aa2a4: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x2aa2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2aa2a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2aa2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa2ac: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2aa2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa2b0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2aa2b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2aa2b4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aa2b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aa2b8: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x2aa2b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2aa2bc: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2aa2bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2aa2c0: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2aa2c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aa2c4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2aa2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa2c8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2aa2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2aa2cc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2aa2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa2d0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2aa2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa2d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aa2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa2d8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2aa2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa2dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2aa2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2aa2e0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2aa2e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2aa2e4: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2aa2e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2aa2e8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2aa2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2aa2ec: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x2aa2ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2aa2f0: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2aa2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2aa2f4: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2aa2f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2aa2f8: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x2aa2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2aa2fc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2aa2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa300: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa304: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2aa304u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2aa308: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2aa308u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aa30c: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2aa30cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2aa310: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x2aa310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2aa314: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x2aa314u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2aa318: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2aa318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa31c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AA31Cu;
    {
        const bool branch_taken_0x2aa31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA31Cu;
        // 0x2aa320: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa31c) {
            ctx->pc = 0x2AA378u;
            goto label_2aa378;
        }
    }
    ctx->pc = 0x2AA324u;
label_2aa324:
    // 0x2aa324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa32c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x2aa32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2aa330: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2aa330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2aa334: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2aa334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2aa338: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2aa338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2aa33c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2aa33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2aa340: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x2aa340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x2aa344: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2aa344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2aa348: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2aa348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aa34c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2aa34cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2aa350: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2aa350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa354: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2aa354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa358: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2aa358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2aa35c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2aa35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2aa360: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2aa360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa364: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2aa364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa368: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2aa368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa36c: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2aa36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x2aa370: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x2aa370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2aa374: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2aa374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2aa378:
    // 0x2aa378: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2aa378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2aa37c:
    // 0x2aa37c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2aa37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa380: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2aa380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa384: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2aa384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2aa388: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2aa388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2aa38c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2aa38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa390: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2aa390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2aa394: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2aa394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aa398: 0xc0aada4  jal         func_2AB690
    ctx->pc = 0x2AA398u;
    SET_GPR_U32(ctx, 31, 0x2AA3A0u);
    ctx->pc = 0x2AA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA398u;
    // 0x2aa39c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB690u, 0x2AA398u, 0x2AA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA3A0u;
label_2aa3a0:
    // 0x2aa3a0: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x2aa3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2aa3a4: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x2aa3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2aa3a8: 0x6843000f  ldl         $v1, 0xF($v0)
    ctx->pc = 0x2aa3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aa3ac: 0x6c430008  ldr         $v1, 0x8($v0)
    ctx->pc = 0x2aa3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aa3b0: 0xb3aa0047  sdl         $t2, 0x47($sp)
    ctx->pc = 0x2aa3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa3b4: 0xb7aa0040  sdr         $t2, 0x40($sp)
    ctx->pc = 0x2aa3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa3b8: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x2aa3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa3bc: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x2aa3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa3c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2aa3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa3c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2aa3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa3c8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2aa3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa3cc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2aa3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa3d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2aa3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa3d4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2aa3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa3d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2aa3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa3dc: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2aa3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa3e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2aa3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa3e4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2aa3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa3e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2aa3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2aa3ec: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2aa3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa3f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2aa3f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2aa3f4: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x2aa3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aa3f8: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x2aa3f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2aa3fc: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2aa3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa400: 0xc7af0024  lwc1        $f15, 0x24($sp)
    ctx->pc = 0x2aa400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2aa404: 0x460d2340  add.s       $f13, $f4, $f13
    ctx->pc = 0x2aa404u;
    ctx->f[13] = FPU_ADD_S(ctx->f[4], ctx->f[13]);
    // 0x2aa408: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2aa408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2aa40c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2aa40cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2aa410: 0x460f13c2  mul.s       $f15, $f2, $f15
    ctx->pc = 0x2aa410u;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2aa414: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2AA414u;
    SET_GPR_U32(ctx, 31, 0x2AA41Cu);
    ctx->pc = 0x2AA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA414u;
    // 0x2aa418: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2AA414u, 0x2AA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA41Cu;
label_2aa41c:
    // 0x2aa41c: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x2AA41Cu;
    SET_GPR_U32(ctx, 31, 0x2AA424u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x2AA41Cu, 0x2AA424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA424u;
label_2aa424:
    // 0x2aa424: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2aa424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2aa428: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA428u;
    {
        const bool branch_taken_0x2aa428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa428) {
            ctx->pc = 0x2AA42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA428u;
            // 0x2aa42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA44Cu;
            goto label_2aa44c;
        }
    }
    ctx->pc = 0x2AA430u;
    // 0x2aa430: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa434: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2aa434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa438: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aa438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa43c: 0x0  nop
    ctx->pc = 0x2aa43cu;
    // NOP
    // 0x2aa440: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA440u;
    {
        const bool branch_taken_0x2aa440 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA440u;
        // 0x2aa444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa440) {
            ctx->pc = 0x2AA44Cu;
            goto label_2aa44c;
        }
    }
    ctx->pc = 0x2AA448u;
    // 0x2aa448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa44c:
    // 0x2aa44c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aa44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa450: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA450u;
    {
        const bool branch_taken_0x2aa450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA450u;
        // 0x2aa454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa450) {
            ctx->pc = 0x2AA474u;
            goto label_2aa474;
        }
    }
    ctx->pc = 0x2AA458u;
    // 0x2aa458: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x2aa458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2aa45c: 0xa222008d  sb          $v0, 0x8D($s1)
    ctx->pc = 0x2aa45cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa460: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2aa460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2aa464: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA464u;
    {
        const bool branch_taken_0x2aa464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA464u;
        // 0x2aa468: 0xa220008c  sb          $zero, 0x8C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa464) {
            ctx->pc = 0x2AA474u;
            goto label_2aa474;
        }
    }
    ctx->pc = 0x2AA46Cu;
    // 0x2aa46c: 0xc0a2d80  jal         func_28B600
    ctx->pc = 0x2AA46Cu;
    SET_GPR_U32(ctx, 31, 0x2AA474u);
    ctx->pc = 0x2AA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA46Cu;
    // 0x2aa470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B600u, 0x2AA46Cu, 0x2AA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA474u;
label_2aa474:
    // 0x2aa474: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2aa474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2aa478: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2aa478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2aa47c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2aa47cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2aa480: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2aa480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2aa484: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2aa484u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2aa488: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2aa488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2aa48c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x2aa48cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2aa490: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x2aa490u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2aa494: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x2aa494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2aa498: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2aa498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aa49c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA49Cu;
        // 0x2aa4a0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA4A4u;
    // 0x2aa4a4: 0x0  nop
    ctx->pc = 0x2aa4a4u;
    // NOP
    ctx->pc = 0x2aa4a8u;
}
