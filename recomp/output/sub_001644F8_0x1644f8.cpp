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

// Function: sub_001644F8
// Address: 0x1644f8 - 0x164578
void sub_001644F8_0x1644f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001644F8_0x1644f8");
#endif

    switch (ctx->pc) {
        case 0x16451cu: goto label_16451c;
        case 0x164528u: goto label_164528;
        case 0x164534u: goto label_164534;
        case 0x164544u: goto label_164544;
        case 0x164550u: goto label_164550;
        case 0x164560u: goto label_164560;
        default: break;
    }

    ctx->pc = 0x1644f8u;

    // 0x1644f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1644fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1644fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x164508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16450c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164510: 0xae060218  sw          $a2, 0x218($s0)
    ctx->pc = 0x164510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 6));
    // 0x164514: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x164514u;
    SET_GPR_U32(ctx, 31, 0x16451Cu);
    ctx->pc = 0x164518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164514u;
    // 0x164518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x164514u, 0x16451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16451Cu;
label_16451c:
    // 0x16451c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164520: 0xc046272  jal         func_1189C8
    ctx->pc = 0x164520u;
    SET_GPR_U32(ctx, 31, 0x164528u);
    ctx->pc = 0x164524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164520u;
    // 0x164524: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x164520u, 0x164528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164528u;
label_164528:
    // 0x164528: 0xa2020300  sb          $v0, 0x300($s0)
    ctx->pc = 0x164528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 768), (uint8_t)GPR_U32(ctx, 2));
    // 0x16452c: 0xc0460e4  jal         func_118390
    ctx->pc = 0x16452Cu;
    SET_GPR_U32(ctx, 31, 0x164534u);
    ctx->pc = 0x164530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16452Cu;
    // 0x164530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x16452Cu, 0x164534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164534u;
label_164534:
    // 0x164534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164534u;
    {
        const bool branch_taken_0x164534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164534u;
        // 0x164538: 0xae0203b8  sw          $v0, 0x3B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164534) {
            ctx->pc = 0x164548u;
            goto label_164548;
        }
    }
    ctx->pc = 0x16453Cu;
    // 0x16453c: 0xc04623e  jal         func_1188F8
    ctx->pc = 0x16453Cu;
    SET_GPR_U32(ctx, 31, 0x164544u);
    ctx->pc = 0x164540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16453Cu;
    // 0x164540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1188F8u, 0x16453Cu, 0x164544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164544u;
label_164544:
    // 0x164544: 0xae0203bc  sw          $v0, 0x3BC($s0)
    ctx->pc = 0x164544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 2));
label_164548:
    // 0x164548: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x164548u;
    SET_GPR_U32(ctx, 31, 0x164550u);
    ctx->pc = 0x16454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164548u;
    // 0x16454c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x164548u, 0x164550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164550u;
label_164550:
    // 0x164550: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x164550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x164554: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164558: 0xc042136  jal         func_1084D8
    ctx->pc = 0x164558u;
    SET_GPR_U32(ctx, 31, 0x164560u);
    ctx->pc = 0x16455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164558u;
    // 0x16455c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x164558u, 0x164560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164560u;
label_164560:
    // 0x164560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164564: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16456c: 0x3e00008  jr          $ra
    ctx->pc = 0x16456Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16456Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164574u;
    // 0x164574: 0x0  nop
    ctx->pc = 0x164574u;
    // NOP
    ctx->pc = 0x164578u;
}
