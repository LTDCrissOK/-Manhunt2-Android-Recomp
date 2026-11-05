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

// Function: sub_00271540
// Address: 0x271540 - 0x2715b0
void sub_00271540_0x271540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271540_0x271540");
#endif

    switch (ctx->pc) {
        case 0x271554u: goto label_271554;
        case 0x2715a0u: goto label_2715a0;
        default: break;
    }

    ctx->pc = 0x271540u;

    // 0x271540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x271548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27154c: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x27154Cu;
    SET_GPR_U32(ctx, 31, 0x271554u);
    ctx->pc = 0x271550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27154Cu;
    // 0x271550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x27154Cu, 0x271554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271554u;
label_271554:
    // 0x271554: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x271554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x271558: 0x8e040284  lw          $a0, 0x284($s0)
    ctx->pc = 0x271558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x27155c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271560: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271560u;
    {
        const bool branch_taken_0x271560 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x271564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271560u;
        // 0x271564: 0x24650070  addiu       $a1, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271560) {
            ctx->pc = 0x27157Cu;
            goto label_27157c;
        }
    }
    ctx->pc = 0x271568u;
    // 0x271568: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x271568u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27156c: 0x0  nop
    ctx->pc = 0x27156cu;
    // NOP
    // 0x271570: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x271570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x271574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271574u;
    {
        const bool branch_taken_0x271574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271574) {
            ctx->pc = 0x271598u;
            goto label_271598;
        }
    }
    ctx->pc = 0x27157Cu;
label_27157c:
    // 0x27157c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x27157cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x271580: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x271580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x271584: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x271584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x271588: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x271588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27158c: 0x0  nop
    ctx->pc = 0x27158cu;
    // NOP
    // 0x271590: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x271590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x271594: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x271594u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_271598:
    // 0x271598: 0xc09c516  jal         func_271458
    ctx->pc = 0x271598u;
    SET_GPR_U32(ctx, 31, 0x2715A0u);
    ctx->pc = 0x27159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271598u;
    // 0x27159c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271458u, 0x271598u, 0x2715A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715A0u;
label_2715a0:
    // 0x2715a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2715a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2715a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2715a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2715a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2715A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2715ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715A8u;
        // 0x2715ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2715A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2715B0u;
}
