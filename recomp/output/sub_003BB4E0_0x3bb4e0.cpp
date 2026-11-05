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

// Function: sub_003BB4E0
// Address: 0x3bb4e0 - 0x3bb550
void sub_003BB4E0_0x3bb4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB4E0_0x3bb4e0");
#endif

    switch (ctx->pc) {
        case 0x3bb514u: goto label_3bb514;
        case 0x3bb52cu: goto label_3bb52c;
        case 0x3bb534u: goto label_3bb534;
        default: break;
    }

    ctx->pc = 0x3bb4e0u;

    // 0x3bb4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bb4e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bb4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bb4e8: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x3bb4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x3bb4ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bb4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3bb4f0: 0x8222c908  lb          $v0, -0x36F8($s1)
    ctx->pc = 0x3bb4f0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x42C908u));
    // 0x3bb4f4: 0x2632c908  addiu       $s2, $s1, -0x36F8
    ctx->pc = 0x3bb4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953224));
    // 0x3bb4f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bb4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bb4fc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3BB4FCu;
    {
        const bool branch_taken_0x3bb4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4FCu;
        // 0x3bb500: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb4fc) {
            ctx->pc = 0x3BB534u;
            goto label_3bb534;
        }
    }
    ctx->pc = 0x3BB504u;
    // 0x3bb504: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3bb504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3bb508: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bb508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb50c: 0xc0f3872  jal         func_3CE1C8
    ctx->pc = 0x3BB50Cu;
    SET_GPR_U32(ctx, 31, 0x3BB514u);
    ctx->pc = 0x3BB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB50Cu;
    // 0x3bb510: 0x24840af8  addiu       $a0, $a0, 0xAF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x3BB50Cu, 0x3BB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB514u;
label_3bb514:
    // 0x3bb514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bb514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb518: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB518u;
    {
        const bool branch_taken_0x3bb518 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3BB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB518u;
        // 0x3bb51c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb518) {
            ctx->pc = 0x3BB534u;
            goto label_3bb534;
        }
    }
    ctx->pc = 0x3BB520u;
    // 0x3bb520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bb520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb524: 0xc0f3a04  jal         func_3CE810
    ctx->pc = 0x3BB524u;
    SET_GPR_U32(ctx, 31, 0x3BB52Cu);
    ctx->pc = 0x3BB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB524u;
    // 0x3bb528: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE810u, 0x3BB524u, 0x3BB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB52Cu;
label_3bb52c:
    // 0x3bb52c: 0xc0f3916  jal         func_3CE458
    ctx->pc = 0x3BB52Cu;
    SET_GPR_U32(ctx, 31, 0x3BB534u);
    ctx->pc = 0x3BB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB52Cu;
    // 0x3bb530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x3BB52Cu, 0x3BB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB534u;
label_3bb534:
    // 0x3bb534: 0x2622c908  addiu       $v0, $s1, -0x36F8
    ctx->pc = 0x3bb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953224));
    // 0x3bb538: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bb538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bb53c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bb53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb540: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bb540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bb544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb548: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB548u;
        // 0x3bb54c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB550u;
}
