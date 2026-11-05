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

// Function: sub_00175518
// Address: 0x175518 - 0x175568
void sub_00175518_0x175518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175518_0x175518");
#endif

    switch (ctx->pc) {
        case 0x175518u: goto label_175518;
        case 0x17551cu: goto label_17551c;
        case 0x175520u: goto label_175520;
        case 0x175524u: goto label_175524;
        case 0x175528u: goto label_175528;
        case 0x17552cu: goto label_17552c;
        case 0x175530u: goto label_175530;
        case 0x175534u: goto label_175534;
        case 0x175538u: goto label_175538;
        case 0x17553cu: goto label_17553c;
        case 0x175540u: goto label_175540;
        case 0x175544u: goto label_175544;
        case 0x175548u: goto label_175548;
        case 0x17554cu: goto label_17554c;
        case 0x175550u: goto label_175550;
        case 0x175554u: goto label_175554;
        case 0x175558u: goto label_175558;
        case 0x17555cu: goto label_17555c;
        case 0x175560u: goto label_175560;
        case 0x175564u: goto label_175564;
        default: break;
    }

    ctx->pc = 0x175518u;

label_175518:
    // 0x175518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17551c:
    // 0x17551c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_175520:
    // 0x175520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_175524:
    // 0x175524: 0xc04f7a6  jal         func_13DE98
label_175528:
    if (ctx->pc == 0x175528u) {
        ctx->pc = 0x175528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175524u;
        // 0x175528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17552Cu;
        goto label_17552c;
    }
    ctx->pc = 0x175524u;
    SET_GPR_U32(ctx, 31, 0x17552Cu);
    ctx->pc = 0x175528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175524u;
    // 0x175528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE98u, 0x175524u, 0x17552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17552Cu;
label_17552c:
    // 0x17552c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x17552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_175530:
    // 0x175530: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x175530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_175534:
    // 0x175534: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x175534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_175538:
    // 0x175538: 0x40f809  jalr        $v0
label_17553c:
    if (ctx->pc == 0x17553Cu) {
        ctx->pc = 0x175540u;
        goto label_175540;
    }
    ctx->pc = 0x175538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175540u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175538u, 0x175540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175540u;
label_175540:
    // 0x175540: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_175544:
    // 0x175544: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x175544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_175548:
    // 0x175548: 0xc042010  jal         func_108040
label_17554c:
    if (ctx->pc == 0x17554Cu) {
        ctx->pc = 0x17554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175548u;
        // 0x17554c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175550u;
        goto label_175550;
    }
    ctx->pc = 0x175548u;
    SET_GPR_U32(ctx, 31, 0x175550u);
    ctx->pc = 0x17554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175548u;
    // 0x17554c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108040u, 0x175548u, 0x175550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175550u;
label_175550:
    // 0x175550: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x175550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_175554:
    // 0x175554: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x175554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_175558:
    // 0x175558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17555c:
    // 0x17555c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17555cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_175560:
    // 0x175560: 0x3e00008  jr          $ra
label_175564:
    if (ctx->pc == 0x175564u) {
        ctx->pc = 0x175564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175560u;
        // 0x175564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175568u;
        goto label_fallthrough_0x175560;
    }
    ctx->pc = 0x175560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175560u;
        // 0x175564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175560:
    ctx->pc = 0x175568u;
}
