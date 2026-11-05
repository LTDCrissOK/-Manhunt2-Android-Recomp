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

// Function: sub_002DA120
// Address: 0x2da120 - 0x2da250
void sub_002DA120_0x2da120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA120_0x2da120");
#endif

    switch (ctx->pc) {
        case 0x2da160u: goto label_2da160;
        case 0x2da178u: goto label_2da178;
        case 0x2da198u: goto label_2da198;
        case 0x2da1a0u: goto label_2da1a0;
        case 0x2da1b4u: goto label_2da1b4;
        case 0x2da1c4u: goto label_2da1c4;
        case 0x2da1d8u: goto label_2da1d8;
        case 0x2da1e8u: goto label_2da1e8;
        case 0x2da1f8u: goto label_2da1f8;
        case 0x2da204u: goto label_2da204;
        case 0x2da214u: goto label_2da214;
        case 0x2da220u: goto label_2da220;
        default: break;
    }

    ctx->pc = 0x2da120u;

    // 0x2da120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2da124: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2da124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x2da128: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2da128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2da12c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2da12cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2da130: 0x2450fe40  addiu       $s0, $v0, -0x1C0
    ctx->pc = 0x2da130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x2da134: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2da134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2da138: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2da138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2da13c: 0x24a5f018  addiu       $a1, $a1, -0xFE8
    ctx->pc = 0x2da13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963224));
    // 0x2da140: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2da140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2da144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da148: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2da148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2da14c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2da14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2da150: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2da150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2da154: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2da154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2da158: 0xc09dd98  jal         func_277660
    ctx->pc = 0x2DA158u;
    SET_GPR_U32(ctx, 31, 0x2DA160u);
    ctx->pc = 0x2DA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA158u;
    // 0x2da15c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x2DA158u, 0x2DA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA160u;
label_2da160:
    // 0x2da160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA160u;
    {
        const bool branch_taken_0x2da160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA160u;
        // 0x2da164: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da160) {
            ctx->pc = 0x2DA170u;
            goto label_2da170;
        }
    }
    ctx->pc = 0x2DA168u;
    // 0x2da168: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2DA168u;
    {
        const bool branch_taken_0x2da168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA168u;
        // 0x2da16c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da168) {
            ctx->pc = 0x2DA224u;
            goto label_2da224;
        }
    }
    ctx->pc = 0x2DA170u;
label_2da170:
    // 0x2da170: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x2DA170u;
    SET_GPR_U32(ctx, 31, 0x2DA178u);
    ctx->pc = 0x2DA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA170u;
    // 0x2da174: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2DA170u, 0x2DA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA178u;
label_2da178:
    // 0x2da178: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x2da178u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x2da17c: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x2da17cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x2da180: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x2da180u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x2da184: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x2da184u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x2da188: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x2da188u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
    // 0x2da18c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA18Cu;
    {
        const bool branch_taken_0x2da18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA18Cu;
        // 0x2da190: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da18c) {
            ctx->pc = 0x2DA1F8u;
            goto label_2da1f8;
        }
    }
    ctx->pc = 0x2DA194u;
    // 0x2da194: 0x0  nop
    ctx->pc = 0x2da194u;
    // NOP
label_2da198:
    // 0x2da198: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA198u;
    SET_GPR_U32(ctx, 31, 0x2DA1A0u);
    ctx->pc = 0x2DA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA198u;
    // 0x2da19c: 0x26c514c8  addiu       $a1, $s6, 0x14C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA198u, 0x2DA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1A0u;
label_2da1a0:
    // 0x2da1a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA1A0u;
    {
        const bool branch_taken_0x2da1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1A0u;
        // 0x2da1a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1a0) {
            ctx->pc = 0x2DA1BCu;
            goto label_2da1bc;
        }
    }
    ctx->pc = 0x2DA1A8u;
    // 0x2da1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1ac: 0xc0b6894  jal         func_2DA250
    ctx->pc = 0x2DA1ACu;
    SET_GPR_U32(ctx, 31, 0x2DA1B4u);
    ctx->pc = 0x2DA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1ACu;
    // 0x2da1b0: 0x26a5b0e0  addiu       $a1, $s5, -0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA250u, 0x2DA1ACu, 0x2DA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1B4u;
label_2da1b4:
    // 0x2da1b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DA1B4u;
    {
        const bool branch_taken_0x2da1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1B4u;
        // 0x2da1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1b4) {
            ctx->pc = 0x2DA1FCu;
            goto label_2da1fc;
        }
    }
    ctx->pc = 0x2DA1BCu;
label_2da1bc:
    // 0x2da1bc: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA1BCu;
    SET_GPR_U32(ctx, 31, 0x2DA1C4u);
    ctx->pc = 0x2DA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1BCu;
    // 0x2da1c0: 0x268514d8  addiu       $a1, $s4, 0x14D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA1BCu, 0x2DA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1C4u;
label_2da1c4:
    // 0x2da1c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA1C4u;
    {
        const bool branch_taken_0x2da1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1C4u;
        // 0x2da1c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1c4) {
            ctx->pc = 0x2DA1E0u;
            goto label_2da1e0;
        }
    }
    ctx->pc = 0x2DA1CCu;
    // 0x2da1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1d0: 0xc0b6894  jal         func_2DA250
    ctx->pc = 0x2DA1D0u;
    SET_GPR_U32(ctx, 31, 0x2DA1D8u);
    ctx->pc = 0x2DA1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1D0u;
    // 0x2da1d4: 0x266578e0  addiu       $a1, $s3, 0x78E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 30944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA250u, 0x2DA1D0u, 0x2DA1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1D8u;
label_2da1d8:
    // 0x2da1d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA1D8u;
    {
        const bool branch_taken_0x2da1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1D8u;
        // 0x2da1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1d8) {
            ctx->pc = 0x2DA1FCu;
            goto label_2da1fc;
        }
    }
    ctx->pc = 0x2DA1E0u;
label_2da1e0:
    // 0x2da1e0: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA1E0u;
    SET_GPR_U32(ctx, 31, 0x2DA1E8u);
    ctx->pc = 0x2DA1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1E0u;
    // 0x2da1e4: 0x264514e8  addiu       $a1, $s2, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA1E0u, 0x2DA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1E8u;
label_2da1e8:
    // 0x2da1e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA1E8u;
    {
        const bool branch_taken_0x2da1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1E8u;
        // 0x2da1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1e8) {
            ctx->pc = 0x2DA1FCu;
            goto label_2da1fc;
        }
    }
    ctx->pc = 0x2DA1F0u;
    // 0x2da1f0: 0xc0b6894  jal         func_2DA250
    ctx->pc = 0x2DA1F0u;
    SET_GPR_U32(ctx, 31, 0x2DA1F8u);
    ctx->pc = 0x2DA1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1F0u;
    // 0x2da1f4: 0x2625dce0  addiu       $a1, $s1, -0x2320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA250u, 0x2DA1F0u, 0x2DA1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1F8u;
label_2da1f8:
    // 0x2da1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da1fc:
    // 0x2da1fc: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x2DA1FCu;
    SET_GPR_U32(ctx, 31, 0x2DA204u);
    ctx->pc = 0x2DA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1FCu;
    // 0x2da200: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x2DA1FCu, 0x2DA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA204u;
label_2da204:
    // 0x2da204: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2DA204u;
    {
        const bool branch_taken_0x2da204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA204u;
        // 0x2da208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da204) {
            ctx->pc = 0x2DA198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da198;
        }
    }
    ctx->pc = 0x2DA20Cu;
    // 0x2da20c: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x2DA20Cu;
    SET_GPR_U32(ctx, 31, 0x2DA214u);
    ctx->pc = 0x2DA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA20Cu;
    // 0x2da210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x2DA20Cu, 0x2DA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA214u;
label_2da214:
    // 0x2da214: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da218: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2DA218u;
    SET_GPR_U32(ctx, 31, 0x2DA220u);
    ctx->pc = 0x2DA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA218u;
    // 0x2da21c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DA218u, 0x2DA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA220u;
label_2da220:
    // 0x2da220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da224:
    // 0x2da224: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2da224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da228: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2da228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2da22c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2da22cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da230: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2da230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2da234: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2da234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da238: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2da238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da23c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2da23cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da240: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2da240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2da244: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA244u;
        // 0x2da248: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA24Cu;
    // 0x2da24c: 0x0  nop
    ctx->pc = 0x2da24cu;
    // NOP
    ctx->pc = 0x2da250u;
}
