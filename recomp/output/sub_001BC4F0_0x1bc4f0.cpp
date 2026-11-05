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

// Function: sub_001BC4F0
// Address: 0x1bc4f0 - 0x1bc588
void sub_001BC4F0_0x1bc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC4F0_0x1bc4f0");
#endif

    ctx->pc = 0x1bc4f0u;

    // 0x1bc4f0: 0x8c820360  lw          $v0, 0x360($a0)
    ctx->pc = 0x1bc4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 864)));
    // 0x1bc4f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BC4F4u;
    {
        const bool branch_taken_0x1bc4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4F4u;
        // 0x1bc4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4f4) {
            ctx->pc = 0x1BC57Cu;
            goto label_1bc57c;
        }
    }
    ctx->pc = 0x1BC4FCu;
    // 0x1bc4fc: 0x8c82035c  lw          $v0, 0x35C($a0)
    ctx->pc = 0x1bc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 860)));
    // 0x1bc500: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BC500u;
    {
        const bool branch_taken_0x1bc500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC500u;
        // 0x1bc504: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc500) {
            ctx->pc = 0x1BC57Cu;
            goto label_1bc57c;
        }
    }
    ctx->pc = 0x1BC508u;
    // 0x1bc508: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bc508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1bc50c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC50Cu;
    {
        const bool branch_taken_0x1bc50c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC50Cu;
        // 0x1bc510: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc50c) {
            ctx->pc = 0x1BC528u;
            goto label_1bc528;
        }
    }
    ctx->pc = 0x1BC514u;
    // 0x1bc514: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc518: 0x0  nop
    ctx->pc = 0x1bc518u;
    // NOP
    // 0x1bc51c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bc51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bc520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC520u;
    {
        const bool branch_taken_0x1bc520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc520) {
            ctx->pc = 0x1BC540u;
            goto label_1bc540;
        }
    }
    ctx->pc = 0x1BC528u;
label_1bc528:
    // 0x1bc528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc52c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc530: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc534: 0x0  nop
    ctx->pc = 0x1bc534u;
    // NOP
    // 0x1bc538: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bc538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bc53c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bc53cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bc540:
    // 0x1bc540: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bc540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bc544: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bc544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bc548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc54c: 0xc4810364  lwc1        $f1, 0x364($a0)
    ctx->pc = 0x1bc54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc550: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bc554: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bc554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc558: 0x0  nop
    ctx->pc = 0x1bc558u;
    // NOP
    // 0x1bc55c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC55Cu;
    {
        const bool branch_taken_0x1bc55c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc55c) {
            ctx->pc = 0x1BC560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC55Cu;
            // 0x1bc560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC580u;
            goto label_1bc580;
        }
    }
    ctx->pc = 0x1BC564u;
    // 0x1bc564: 0x8c820340  lw          $v0, 0x340($a0)
    ctx->pc = 0x1bc564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x1bc568: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC568u;
    {
        const bool branch_taken_0x1bc568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc568) {
            ctx->pc = 0x1BC56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC568u;
            // 0x1bc56c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC580u;
            goto label_1bc580;
        }
    }
    ctx->pc = 0x1BC570u;
    // 0x1bc570: 0x8c820344  lw          $v0, 0x344($a0)
    ctx->pc = 0x1bc570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1bc574: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC574u;
    {
        const bool branch_taken_0x1bc574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc574) {
            ctx->pc = 0x1BC580u;
            goto label_1bc580;
        }
    }
    ctx->pc = 0x1BC57Cu;
label_1bc57c:
    // 0x1bc57c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc580:
    // 0x1bc580: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC580u;
        // 0x1bc584: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC588u;
}
