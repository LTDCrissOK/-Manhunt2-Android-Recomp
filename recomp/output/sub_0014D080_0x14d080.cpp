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

// Function: sub_0014D080
// Address: 0x14d080 - 0x14d168
void sub_0014D080_0x14d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D080_0x14d080");
#endif

    switch (ctx->pc) {
        case 0x14d128u: goto label_14d128;
        default: break;
    }

    ctx->pc = 0x14d080u;

    // 0x14d080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d084: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14d084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d08c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14d08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14d090: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x14d090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14d094: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14d094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14d098: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x14d098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x14d09c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x14d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14d0a0: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x14d0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x14d0a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14d0a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14d0ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d0b0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14d0b4: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x14d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14d0b8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d0bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d0c0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14d0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14d0c4: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x14d0c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D0C8u;
    {
        const bool branch_taken_0x14d0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d0c8) {
            ctx->pc = 0x14D0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D0C8u;
            // 0x14d0cc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D0D8u;
            goto label_14d0d8;
        }
    }
    ctx->pc = 0x14D0D0u;
    // 0x14d0d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D0D0u;
    {
        const bool branch_taken_0x14d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0D0u;
        // 0x14d0d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0d0) {
            ctx->pc = 0x14D0E0u;
            goto label_14d0e0;
        }
    }
    ctx->pc = 0x14D0D8u;
label_14d0d8:
    // 0x14d0d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d0dc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x14d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14d0e0:
    // 0x14d0e0: 0x8ce20468  lw          $v0, 0x468($a3)
    ctx->pc = 0x14d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1128)));
    // 0x14d0e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14d0e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d0ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x14d0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0f0: 0xc45402f4  lwc1        $f20, 0x2F4($v0)
    ctx->pc = 0x14d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d0f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x14d0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14d0f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14d0fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14d0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14d100: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d104: 0x8ce50664  lw          $a1, 0x664($a3)
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1636)));
    // 0x14d108: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14d108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14d10c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14d10cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14d110: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d114: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x14d114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14d118: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x14d118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d11c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x14d11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14d120: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14D120u;
    SET_GPR_U32(ctx, 31, 0x14D128u);
    ctx->pc = 0x14D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D120u;
    // 0x14d124: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14D120u, 0x14D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D128u;
label_14d128:
    // 0x14d128: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x14d128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14d12c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x14d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d130: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x14d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d134: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x14d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14d138: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14d138u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14d13c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14d13cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14d140: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x14d140u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14d144: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x14d144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d148: 0x0  nop
    ctx->pc = 0x14d148u;
    // NOP
    // 0x14d14c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14D14Cu;
    {
        const bool branch_taken_0x14d14c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D14Cu;
        // 0x14d150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d14c) {
            ctx->pc = 0x14D158u;
            goto label_14d158;
        }
    }
    ctx->pc = 0x14D154u;
    // 0x14d154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14d154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d158:
    // 0x14d158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d15c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x14d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d160: 0x3e00008  jr          $ra
    ctx->pc = 0x14D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D160u;
        // 0x14d164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D168u;
}
