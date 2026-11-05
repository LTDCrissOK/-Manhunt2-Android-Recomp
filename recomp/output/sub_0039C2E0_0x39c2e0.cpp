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

// Function: sub_0039C2E0
// Address: 0x39c2e0 - 0x39c3a8
void sub_0039C2E0_0x39c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C2E0_0x39c2e0");
#endif

    switch (ctx->pc) {
        case 0x39c384u: goto label_39c384;
        default: break;
    }

    ctx->pc = 0x39c2e0u;

    // 0x39c2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c2e4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x39c2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39c2ec: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C2ECu;
    {
        const bool branch_taken_0x39c2ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2ECu;
        // 0x39c2f0: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c2ec) {
            ctx->pc = 0x39C308u;
            goto label_39c308;
        }
    }
    ctx->pc = 0x39C2F4u;
    // 0x39c2f4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39c2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c2fc: 0x2484b618  addiu       $a0, $a0, -0x49E8
    ctx->pc = 0x39c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948376));
    // 0x39c300: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39C300u;
    ctx->pc = 0x39C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C300u;
    // 0x39c304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39C308u;
label_39c308:
    // 0x39c308: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x39c308u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39c30c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39c30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x39c310: 0x8527003c  lh          $a3, 0x3C($t1)
    ctx->pc = 0x39c310u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x39c314: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x39c314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x39c318: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x39c318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c31c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x39c31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c320: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x39c320u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x39c324: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x39c324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x39c328: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39c328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39c32c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39c32cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39c330: 0x2465001f  addiu       $a1, $v1, 0x1F
    ctx->pc = 0x39c330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x39c334: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x39c334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39c338: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x39c338u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x39c33c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x39c33cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x39c340: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x39c340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39c344: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x39c344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x39c348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c34c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39c350: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x39c350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x39c354: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39c354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c358: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x39c358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39c35c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x39c35cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x39c360: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x39c360u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x39c364: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x39c364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x39c368: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x39c368u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x39c36c: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x39c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x39c370: 0xa527003e  sh          $a3, 0x3E($t1)
    ctx->pc = 0x39c370u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 62), (uint16_t)GPR_U32(ctx, 7));
    // 0x39c374: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C374u;
    {
        const bool branch_taken_0x39c374 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C374u;
        // 0x39c378: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c374) {
            ctx->pc = 0x39C384u;
            goto label_39c384;
        }
    }
    ctx->pc = 0x39C37Cu;
    // 0x39c37c: 0xc0e69c2  jal         func_39A708
    ctx->pc = 0x39C37Cu;
    SET_GPR_U32(ctx, 31, 0x39C384u);
    ctx->pc = 0x39A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A708u, 0x39C37Cu, 0x39C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C384u;
label_39c384:
    // 0x39c384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c388: 0x3e00008  jr          $ra
    ctx->pc = 0x39C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C388u;
        // 0x39c38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C390u;
    // 0x39c390: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c394: 0x0  nop
    ctx->pc = 0x39c394u;
    // NOP
    // 0x39c398: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c39c: 0x0  nop
    ctx->pc = 0x39c39cu;
    // NOP
    // 0x39c3a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39c3a4: 0x0  nop
    ctx->pc = 0x39c3a4u;
    // NOP
    ctx->pc = 0x39c3a8u;
}
