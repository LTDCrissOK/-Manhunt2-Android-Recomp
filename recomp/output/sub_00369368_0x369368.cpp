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

// Function: sub_00369368
// Address: 0x369368 - 0x369448
void sub_00369368_0x369368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369368_0x369368");
#endif

    switch (ctx->pc) {
        case 0x3693b0u: goto label_3693b0;
        case 0x3693d8u: goto label_3693d8;
        case 0x3693f0u: goto label_3693f0;
        case 0x369404u: goto label_369404;
        case 0x369414u: goto label_369414;
        default: break;
    }

    ctx->pc = 0x369368u;

    // 0x369368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36936c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x369374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x369378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36937c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x369380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x369380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369384: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x369384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x369388: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x369388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x36938c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x369390: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x369390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x369394: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x369394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x369398: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x369398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36939c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x36939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3693a0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3693a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693a4: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x3693a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x3693a8: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x3693A8u;
    SET_GPR_U32(ctx, 31, 0x3693B0u);
    ctx->pc = 0x3693ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693A8u;
    // 0x3693ac: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x3693A8u, 0x3693B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693B0u;
label_3693b0:
    // 0x3693b0: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3693b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3693b4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3693b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3693b8: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x3693b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x3693bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3693bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3693c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3693c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3693c4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3693c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3693c8: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x3693c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3693cc: 0x52120014  beql        $s0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3693CCu;
    {
        const bool branch_taken_0x3693cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x3693cc) {
            ctx->pc = 0x3693D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3693CCu;
            // 0x3693d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369420u;
            goto label_369420;
        }
    }
    ctx->pc = 0x3693D4u;
    // 0x3693d4: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x3693d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_3693d8:
    // 0x3693d8: 0x5053000b  beql        $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3693D8u;
    {
        const bool branch_taken_0x3693d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x3693d8) {
            ctx->pc = 0x3693DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3693D8u;
            // 0x3693dc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369408u;
            goto label_369408;
        }
    }
    ctx->pc = 0x3693E0u;
    // 0x3693e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3693e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3693e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693e8: 0xc0c5492  jal         func_315248
    ctx->pc = 0x3693E8u;
    SET_GPR_U32(ctx, 31, 0x3693F0u);
    ctx->pc = 0x3693ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693E8u;
    // 0x3693ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315248u, 0x3693E8u, 0x3693F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693F0u;
label_3693f0:
    // 0x3693f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3693f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3693f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3693f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693fc: 0xc0da46c  jal         func_3691B0
    ctx->pc = 0x3693FCu;
    SET_GPR_U32(ctx, 31, 0x369404u);
    ctx->pc = 0x369400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693FCu;
    // 0x369400: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691B0u, 0x3693FCu, 0x369404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369404u;
label_369404:
    // 0x369404: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x369404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_369408:
    // 0x369408: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x369408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36940c: 0xc0dd8e8  jal         func_3763A0
    ctx->pc = 0x36940Cu;
    SET_GPR_U32(ctx, 31, 0x369414u);
    ctx->pc = 0x369410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36940Cu;
    // 0x369410: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3763A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3763A0u, 0x36940Cu, 0x369414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369414u;
label_369414:
    // 0x369414: 0x5612fff0  bnel        $s0, $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x369414u;
    {
        const bool branch_taken_0x369414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x369414) {
            ctx->pc = 0x369418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369414u;
            // 0x369418: 0x96020022  lhu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3693D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3693d8;
        }
    }
    ctx->pc = 0x36941Cu;
    // 0x36941c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36941cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_369420:
    // 0x369420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x369428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36942c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36942cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369430: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x369430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x369434: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x369434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369438: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x369438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36943c: 0x3e00008  jr          $ra
    ctx->pc = 0x36943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36943Cu;
        // 0x369440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36943Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369444u;
    // 0x369444: 0x0  nop
    ctx->pc = 0x369444u;
    // NOP
    ctx->pc = 0x369448u;
}
