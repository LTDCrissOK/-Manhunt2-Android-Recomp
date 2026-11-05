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

// Function: sub_00243518
// Address: 0x243518 - 0x2435a0
void sub_00243518_0x243518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243518_0x243518");
#endif

    switch (ctx->pc) {
        case 0x243530u: goto label_243530;
        case 0x24357cu: goto label_24357c;
        case 0x24358cu: goto label_24358c;
        default: break;
    }

    ctx->pc = 0x243518u;

    // 0x243518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24351c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243528: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x243528u;
    SET_GPR_U32(ctx, 31, 0x243530u);
    ctx->pc = 0x24352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243528u;
    // 0x24352c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x243528u, 0x243530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243530u;
label_243530:
    // 0x243530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243534: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x243534u;
    {
        const bool branch_taken_0x243534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x243534) {
            ctx->pc = 0x243538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243534u;
            // 0x243538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243590u;
            goto label_243590;
        }
    }
    ctx->pc = 0x24353Cu;
    // 0x24353c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x24353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x243540: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x243540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x243544: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x243544u;
    {
        const bool branch_taken_0x243544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x243544) {
            ctx->pc = 0x243548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243544u;
            // 0x243548: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243590u;
            goto label_243590;
        }
    }
    ctx->pc = 0x24354Cu;
    // 0x24354c: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x24354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x243550: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x243550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x243554: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x243554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x243558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24355c: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x24355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x243560: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x243560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243568: 0x0  nop
    ctx->pc = 0x243568u;
    // NOP
    // 0x24356c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x24356Cu;
    {
        const bool branch_taken_0x24356c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24356c) {
            ctx->pc = 0x243570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24356Cu;
            // 0x243570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243590u;
            goto label_243590;
        }
    }
    ctx->pc = 0x243574u;
    // 0x243574: 0xc09855c  jal         func_261570
    ctx->pc = 0x243574u;
    SET_GPR_U32(ctx, 31, 0x24357Cu);
    ctx->pc = 0x243578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243574u;
    // 0x243578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261570u, 0x243574u, 0x24357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24357Cu;
label_24357c:
    // 0x24357c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24357Cu;
    {
        const bool branch_taken_0x24357c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24357c) {
            ctx->pc = 0x243580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24357Cu;
            // 0x243580: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243590u;
            goto label_243590;
        }
    }
    ctx->pc = 0x243584u;
    // 0x243584: 0xc09854c  jal         func_261530
    ctx->pc = 0x243584u;
    SET_GPR_U32(ctx, 31, 0x24358Cu);
    ctx->pc = 0x243588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243584u;
    // 0x243588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261530u, 0x243584u, 0x24358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24358Cu;
label_24358c:
    // 0x24358c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24358cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243590:
    // 0x243590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243598: 0x3e00008  jr          $ra
    ctx->pc = 0x243598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243598u;
        // 0x24359c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2435A0u;
}
