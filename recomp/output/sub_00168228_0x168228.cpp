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

// Function: sub_00168228
// Address: 0x168228 - 0x168298
void sub_00168228_0x168228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168228_0x168228");
#endif

    switch (ctx->pc) {
        case 0x168250u: goto label_168250;
        case 0x168280u: goto label_168280;
        default: break;
    }

    ctx->pc = 0x168228u;

    // 0x168228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16822c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x168234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16823c: 0x8c820330  lw          $v0, 0x330($a0)
    ctx->pc = 0x16823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x168240: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x168240u;
    {
        const bool branch_taken_0x168240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168240u;
        // 0x168244: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168240) {
            ctx->pc = 0x168280u;
            goto label_168280;
        }
    }
    ctx->pc = 0x168248u;
    // 0x168248: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x168248u;
    SET_GPR_U32(ctx, 31, 0x168250u);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x168248u, 0x168250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168250u;
label_168250:
    // 0x168250: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x168250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x168254: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x168254u;
    {
        const bool branch_taken_0x168254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x168258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168254u;
        // 0x168258: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168254) {
            ctx->pc = 0x168280u;
            goto label_168280;
        }
    }
    ctx->pc = 0x16825Cu;
    // 0x16825c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16825cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x168260: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x168260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x168264: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x168264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x168268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16826c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x16826cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x168270: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x168270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x168274: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x168274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168278: 0xc04668a  jal         func_119A28
    ctx->pc = 0x168278u;
    SET_GPR_U32(ctx, 31, 0x168280u);
    ctx->pc = 0x16827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168278u;
    // 0x16827c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x168278u, 0x168280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168280u;
label_168280:
    // 0x168280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16828c: 0x3e00008  jr          $ra
    ctx->pc = 0x16828Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16828Cu;
        // 0x168290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16828Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168294u;
    // 0x168294: 0x0  nop
    ctx->pc = 0x168294u;
    // NOP
    ctx->pc = 0x168298u;
}
