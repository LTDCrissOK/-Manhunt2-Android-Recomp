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

// Function: sub_00120C20
// Address: 0x120c20 - 0x120d28
void sub_00120C20_0x120c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120C20_0x120c20");
#endif

    switch (ctx->pc) {
        case 0x120d0cu: goto label_120d0c;
        default: break;
    }

    ctx->pc = 0x120c20u;

    // 0x120c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120c24: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120C24u;
    {
        const bool branch_taken_0x120c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C24u;
        // 0x120c28: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c24) {
            ctx->pc = 0x120C34u;
            goto label_120c34;
        }
    }
    ctx->pc = 0x120C2Cu;
    // 0x120c2c: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x120C2Cu;
    {
        const bool branch_taken_0x120c2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x120c2c) {
            ctx->pc = 0x120C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120C2Cu;
            // 0x120c30: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120C3Cu;
            goto label_120c3c;
        }
    }
    ctx->pc = 0x120C34u;
label_120c34:
    // 0x120c34: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x120C34u;
    {
        const bool branch_taken_0x120c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C34u;
        // 0x120c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c34) {
            ctx->pc = 0x120D18u;
            goto label_120d18;
        }
    }
    ctx->pc = 0x120C3Cu;
label_120c3c:
    // 0x120c3c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x120c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x120c40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120c44: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x120c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120c48: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x120c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x120c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x120c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x120c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x120c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120c54: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x120c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x120c58: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x120C58u;
    {
        const bool branch_taken_0x120c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x120c58) {
            ctx->pc = 0x120C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120C58u;
            // 0x120c5c: 0x8ca20104  lw          $v0, 0x104($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120C68u;
            goto label_120c68;
        }
    }
    ctx->pc = 0x120C60u;
    // 0x120c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120C60u;
    {
        const bool branch_taken_0x120c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C60u;
        // 0x120c64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c60) {
            ctx->pc = 0x120C70u;
            goto label_120c70;
        }
    }
    ctx->pc = 0x120C68u;
label_120c68:
    // 0x120c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120c6c: 0x24670070  addiu       $a3, $v1, 0x70
    ctx->pc = 0x120c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_120c70:
    // 0x120c70: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x120C70u;
    {
        const bool branch_taken_0x120c70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C70u;
        // 0x120c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c70) {
            ctx->pc = 0x120D18u;
            goto label_120d18;
        }
    }
    ctx->pc = 0x120C78u;
    // 0x120c78: 0x24c29a08  addiu       $v0, $a2, -0x65F8
    ctx->pc = 0x120c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x120c7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x120c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x120c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x120c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120c84: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x120c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x120c88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x120C88u;
    {
        const bool branch_taken_0x120c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120c88) {
            ctx->pc = 0x120C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120C88u;
            // 0x120c8c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120C98u;
            goto label_120c98;
        }
    }
    ctx->pc = 0x120C90u;
    // 0x120c90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120C90u;
    {
        const bool branch_taken_0x120c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C90u;
        // 0x120c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c90) {
            ctx->pc = 0x120CA0u;
            goto label_120ca0;
        }
    }
    ctx->pc = 0x120C98u;
label_120c98:
    // 0x120c98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120c9c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x120c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_120ca0:
    // 0x120ca0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x120CA0u;
    {
        const bool branch_taken_0x120ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CA0u;
        // 0x120ca4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ca0) {
            ctx->pc = 0x120D14u;
            goto label_120d14;
        }
    }
    ctx->pc = 0x120CA8u;
    // 0x120ca8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x120ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120cac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x120cb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x120cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x120cb4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120cb8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x120cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x120cbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120cc0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x120cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120cc4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x120cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x120cc8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x120cc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x120ccc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x120cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120cd0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x120cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x120cd4: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x120cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120cd8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x120cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x120cdc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x120cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x120ce0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x120ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120ce4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x120ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x120ce8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x120ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120cec: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x120cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x120cf0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x120cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x120cf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x120cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120cf8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x120cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x120cfc: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x120cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120d00: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x120d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x120d04: 0xc041032  jal         func_1040C8
    ctx->pc = 0x120D04u;
    SET_GPR_U32(ctx, 31, 0x120D0Cu);
    ctx->pc = 0x120D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D04u;
    // 0x120d08: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x120D04u, 0x120D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D0Cu;
label_120d0c:
    // 0x120d0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120D0Cu;
    {
        const bool branch_taken_0x120d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D0Cu;
        // 0x120d10: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d0c) {
            ctx->pc = 0x120D1Cu;
            goto label_120d1c;
        }
    }
    ctx->pc = 0x120D14u;
label_120d14:
    // 0x120d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x120d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120d18:
    // 0x120d18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_120d1c:
    // 0x120d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x120D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D1Cu;
        // 0x120d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120D24u;
    // 0x120d24: 0x0  nop
    ctx->pc = 0x120d24u;
    // NOP
    ctx->pc = 0x120d28u;
}
