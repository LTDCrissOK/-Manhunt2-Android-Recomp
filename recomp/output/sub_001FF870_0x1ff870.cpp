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

// Function: sub_001FF870
// Address: 0x1ff870 - 0x1ff8d0
void sub_001FF870_0x1ff870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF870_0x1ff870");
#endif

    switch (ctx->pc) {
        case 0x1ff8c4u: goto label_1ff8c4;
        default: break;
    }

    ctx->pc = 0x1ff870u;

    // 0x1ff870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff874: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ff874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff87c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF87Cu;
    {
        const bool branch_taken_0x1ff87c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF87Cu;
        // 0x1ff880: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff87c) {
            ctx->pc = 0x1FF898u;
            goto label_1ff898;
        }
    }
    ctx->pc = 0x1FF884u;
    // 0x1ff884: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x1ff884u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ff888: 0x0  nop
    ctx->pc = 0x1ff888u;
    // NOP
    // 0x1ff88c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1ff88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1ff890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF890u;
    {
        const bool branch_taken_0x1ff890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF890u;
        // 0x1ff894: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff890) {
            ctx->pc = 0x1FF8A0u;
            goto label_1ff8a0;
        }
    }
    ctx->pc = 0x1FF898u;
label_1ff898:
    // 0x1ff898: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1ff898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ff89c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ff8a0:
    // 0x1ff8a0: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1ff8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ff8a4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1ff8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ff8a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ff8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff8ac: 0xc46c001c  lwc1        $f12, 0x1C($v1)
    ctx->pc = 0x1ff8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff8b0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1ff8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ff8b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff8b8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff8bc: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF8BCu;
    SET_GPR_U32(ctx, 31, 0x1FF8C4u);
    ctx->pc = 0x1FF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8BCu;
    // 0x1ff8c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF8BCu, 0x1FF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF8C4u;
label_1ff8c4:
    // 0x1ff8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8C8u;
        // 0x1ff8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF8D0u;
}
