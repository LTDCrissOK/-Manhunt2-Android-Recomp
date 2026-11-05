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

// Function: sub_00197F68
// Address: 0x197f68 - 0x198008
void sub_00197F68_0x197f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197F68_0x197f68");
#endif

    switch (ctx->pc) {
        case 0x197f68u: goto label_197f68;
        case 0x197f6cu: goto label_197f6c;
        case 0x197f70u: goto label_197f70;
        case 0x197f74u: goto label_197f74;
        case 0x197f78u: goto label_197f78;
        case 0x197f7cu: goto label_197f7c;
        case 0x197f80u: goto label_197f80;
        case 0x197f84u: goto label_197f84;
        case 0x197f88u: goto label_197f88;
        case 0x197f8cu: goto label_197f8c;
        case 0x197f90u: goto label_197f90;
        case 0x197f94u: goto label_197f94;
        case 0x197f98u: goto label_197f98;
        case 0x197f9cu: goto label_197f9c;
        case 0x197fa0u: goto label_197fa0;
        case 0x197fa4u: goto label_197fa4;
        case 0x197fa8u: goto label_197fa8;
        case 0x197facu: goto label_197fac;
        case 0x197fb0u: goto label_197fb0;
        case 0x197fb4u: goto label_197fb4;
        case 0x197fb8u: goto label_197fb8;
        case 0x197fbcu: goto label_197fbc;
        case 0x197fc0u: goto label_197fc0;
        case 0x197fc4u: goto label_197fc4;
        case 0x197fc8u: goto label_197fc8;
        case 0x197fccu: goto label_197fcc;
        case 0x197fd0u: goto label_197fd0;
        case 0x197fd4u: goto label_197fd4;
        case 0x197fd8u: goto label_197fd8;
        case 0x197fdcu: goto label_197fdc;
        case 0x197fe0u: goto label_197fe0;
        case 0x197fe4u: goto label_197fe4;
        case 0x197fe8u: goto label_197fe8;
        case 0x197fecu: goto label_197fec;
        case 0x197ff0u: goto label_197ff0;
        case 0x197ff4u: goto label_197ff4;
        case 0x197ff8u: goto label_197ff8;
        case 0x197ffcu: goto label_197ffc;
        case 0x198000u: goto label_198000;
        case 0x198004u: goto label_198004;
        default: break;
    }

    ctx->pc = 0x197f68u;

label_197f68:
    // 0x197f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_197f6c:
    // 0x197f6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x197f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_197f70:
    // 0x197f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_197f74:
    // 0x197f74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x197f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_197f78:
    // 0x197f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197f7c:
    // 0x197f7c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x197f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_197f80:
    // 0x197f80: 0x5043001d  beql        $v0, $v1, . + 4 + (0x1D << 2)
label_197f84:
    if (ctx->pc == 0x197F84u) {
        ctx->pc = 0x197F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F80u;
        // 0x197f84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F88u;
        goto label_197f88;
    }
    ctx->pc = 0x197F80u;
    {
        const bool branch_taken_0x197f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x197f80) {
            ctx->pc = 0x197F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197F80u;
            // 0x197f84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197FF8u;
            goto label_197ff8;
        }
    }
    ctx->pc = 0x197F88u;
label_197f88:
    // 0x197f88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_197f8c:
    // 0x197f8c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_197f90:
    if (ctx->pc == 0x197F90u) {
        ctx->pc = 0x197F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F8Cu;
        // 0x197f90: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F94u;
        goto label_197f94;
    }
    ctx->pc = 0x197F8Cu;
    {
        const bool branch_taken_0x197f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F8Cu;
        // 0x197f90: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f8c) {
            ctx->pc = 0x197FA4u;
            goto label_197fa4;
        }
    }
    ctx->pc = 0x197F94u;
label_197f94:
    // 0x197f94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x197f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_197f98:
    // 0x197f98: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x197f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_197f9c:
    // 0x197f9c: 0x40f809  jalr        $v0
label_197fa0:
    if (ctx->pc == 0x197FA0u) {
        ctx->pc = 0x197FA4u;
        goto label_197fa4;
    }
    ctx->pc = 0x197F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197FA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F9Cu, 0x197FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197FA4u;
label_197fa4:
    // 0x197fa4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x197fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_197fa8:
    // 0x197fa8: 0xc061a16  jal         func_186858
label_197fac:
    if (ctx->pc == 0x197FACu) {
        ctx->pc = 0x197FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FA8u;
        // 0x197fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FB0u;
        goto label_197fb0;
    }
    ctx->pc = 0x197FA8u;
    SET_GPR_U32(ctx, 31, 0x197FB0u);
    ctx->pc = 0x197FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FA8u;
    // 0x197fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197FA8u, 0x197FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FB0u;
label_197fb0:
    // 0x197fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x197fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_197fb4:
    // 0x197fb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x197fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_197fb8:
    // 0x197fb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_197fbc:
    // 0x197fbc: 0xc06ee7e  jal         func_1BB9F8
label_197fc0:
    if (ctx->pc == 0x197FC0u) {
        ctx->pc = 0x197FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FBCu;
        // 0x197fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FC4u;
        goto label_197fc4;
    }
    ctx->pc = 0x197FBCu;
    SET_GPR_U32(ctx, 31, 0x197FC4u);
    ctx->pc = 0x197FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FBCu;
    // 0x197fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x197FBCu, 0x197FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FC4u;
label_197fc4:
    // 0x197fc4: 0xc061a16  jal         func_186858
label_197fc8:
    if (ctx->pc == 0x197FC8u) {
        ctx->pc = 0x197FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FC4u;
        // 0x197fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FCCu;
        goto label_197fcc;
    }
    ctx->pc = 0x197FC4u;
    SET_GPR_U32(ctx, 31, 0x197FCCu);
    ctx->pc = 0x197FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FC4u;
    // 0x197fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x197FC4u, 0x197FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FCCu;
label_197fcc:
    // 0x197fcc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x197fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_197fd0:
    // 0x197fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_197fd4:
    // 0x197fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197fd8:
    // 0x197fd8: 0xc061a12  jal         func_186848
label_197fdc:
    if (ctx->pc == 0x197FDCu) {
        ctx->pc = 0x197FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FD8u;
        // 0x197fdc: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FE0u;
        goto label_197fe0;
    }
    ctx->pc = 0x197FD8u;
    SET_GPR_U32(ctx, 31, 0x197FE0u);
    ctx->pc = 0x197FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FD8u;
    // 0x197fdc: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197FD8u, 0x197FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FE0u;
label_197fe0:
    // 0x197fe0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x197fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_197fe4:
    // 0x197fe4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x197fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_197fe8:
    // 0x197fe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197fec:
    // 0x197fec: 0xc07072c  jal         func_1C1CB0
label_197ff0:
    if (ctx->pc == 0x197FF0u) {
        ctx->pc = 0x197FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FECu;
        // 0x197ff0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FF4u;
        goto label_197ff4;
    }
    ctx->pc = 0x197FECu;
    SET_GPR_U32(ctx, 31, 0x197FF4u);
    ctx->pc = 0x197FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FECu;
    // 0x197ff0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x197FECu, 0x197FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197FF4u;
label_197ff4:
    // 0x197ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197ff8:
    // 0x197ff8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x197ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_197ffc:
    // 0x197ffc: 0x3e00008  jr          $ra
label_198000:
    if (ctx->pc == 0x198000u) {
        ctx->pc = 0x198000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FFCu;
        // 0x198000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198004u;
        goto label_198004;
    }
    ctx->pc = 0x197FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FFCu;
        // 0x198000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198004u;
label_198004:
    // 0x198004: 0x0  nop
    ctx->pc = 0x198004u;
    // NOP
    ctx->pc = 0x198008u;
}
