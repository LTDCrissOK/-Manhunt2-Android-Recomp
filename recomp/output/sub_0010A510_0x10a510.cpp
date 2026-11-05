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

// Function: sub_0010A510
// Address: 0x10a510 - 0x10a588
void sub_0010A510_0x10a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A510_0x10a510");
#endif

    switch (ctx->pc) {
        case 0x10a52cu: goto label_10a52c;
        case 0x10a538u: goto label_10a538;
        case 0x10a544u: goto label_10a544;
        case 0x10a550u: goto label_10a550;
        case 0x10a568u: goto label_10a568;
        default: break;
    }

    ctx->pc = 0x10a510u;

    // 0x10a510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a51c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10a51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a524: 0xc04338a  jal         func_10CE28
    ctx->pc = 0x10A524u;
    SET_GPR_U32(ctx, 31, 0x10A52Cu);
    ctx->pc = 0x10A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A524u;
    // 0x10a528: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE28u, 0x10A524u, 0x10A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A52Cu;
label_10a52c:
    // 0x10a52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a530: 0xc043568  jal         func_10D5A0
    ctx->pc = 0x10A530u;
    SET_GPR_U32(ctx, 31, 0x10A538u);
    ctx->pc = 0x10A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A530u;
    // 0x10a534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D5A0u, 0x10A530u, 0x10A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A538u;
label_10a538:
    // 0x10a538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a53c: 0xc04359e  jal         func_10D678
    ctx->pc = 0x10A53Cu;
    SET_GPR_U32(ctx, 31, 0x10A544u);
    ctx->pc = 0x10A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A53Cu;
    // 0x10a540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D678u, 0x10A53Cu, 0x10A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A544u;
label_10a544:
    // 0x10a544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a548: 0xc0435b0  jal         func_10D6C0
    ctx->pc = 0x10A548u;
    SET_GPR_U32(ctx, 31, 0x10A550u);
    ctx->pc = 0x10A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A548u;
    // 0x10a54c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D6C0u, 0x10A548u, 0x10A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A550u;
label_10a550:
    // 0x10a550: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10a554: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x10a554u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10a558: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10a558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10a55c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10a560: 0xc043c58  jal         func_10F160
    ctx->pc = 0x10A560u;
    SET_GPR_U32(ctx, 31, 0x10A568u);
    ctx->pc = 0x10A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A560u;
    // 0x10a564: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F160u, 0x10A560u, 0x10A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A568u;
label_10a568:
    // 0x10a568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a574: 0x3e00008  jr          $ra
    ctx->pc = 0x10A574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A574u;
        // 0x10a578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A57Cu;
    // 0x10a57c: 0x0  nop
    ctx->pc = 0x10a57cu;
    // NOP
    // 0x10a580: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10a584: 0x0  nop
    ctx->pc = 0x10a584u;
    // NOP
    ctx->pc = 0x10a588u;
}
