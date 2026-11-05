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

// Function: sub_003526D8
// Address: 0x3526d8 - 0x352878
void sub_003526D8_0x3526d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003526D8_0x3526d8");
#endif

    switch (ctx->pc) {
        case 0x352718u: goto label_352718;
        case 0x352734u: goto label_352734;
        case 0x35275cu: goto label_35275c;
        case 0x352778u: goto label_352778;
        case 0x352780u: goto label_352780;
        case 0x3527a0u: goto label_3527a0;
        case 0x3527acu: goto label_3527ac;
        case 0x3527b4u: goto label_3527b4;
        case 0x3527e8u: goto label_3527e8;
        case 0x352808u: goto label_352808;
        default: break;
    }

    ctx->pc = 0x3526d8u;

    // 0x3526d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3526d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3526dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3526dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3526e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3526e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3526e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3526e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3526e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3526e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3526ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3526ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3526f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3526f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3526f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3526f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3526f8: 0x8e62014c  lw          $v0, 0x14C($s3)
    ctx->pc = 0x3526f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x3526fc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3526FCu;
    {
        const bool branch_taken_0x3526fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526fc) {
            ctx->pc = 0x352700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3526FCu;
            // 0x352700: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352760u;
            goto label_352760;
        }
    }
    ctx->pc = 0x352704u;
    // 0x352704: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x352704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x352708: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x352708u;
    {
        const bool branch_taken_0x352708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352708u;
        // 0x35270c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352708) {
            ctx->pc = 0x352748u;
            goto label_352748;
        }
    }
    ctx->pc = 0x352710u;
    // 0x352710: 0x8e63014c  lw          $v1, 0x14C($s3)
    ctx->pc = 0x352710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x352714: 0x0  nop
    ctx->pc = 0x352714u;
    // NOP
label_352718:
    // 0x352718: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x352718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35271c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x352720: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x352720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352724: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x352724u;
    {
        const bool branch_taken_0x352724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x352724) {
            ctx->pc = 0x352728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352724u;
            // 0x352728: 0x8e620148  lw          $v0, 0x148($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352738u;
            goto label_352738;
        }
    }
    ctx->pc = 0x35272Cu;
    // 0x35272c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35272Cu;
    SET_GPR_U32(ctx, 31, 0x352734u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35272Cu, 0x352734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352734u;
label_352734:
    // 0x352734: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x352734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
label_352738:
    // 0x352738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x352738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35273c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x35273cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352740: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x352740u;
    {
        const bool branch_taken_0x352740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352740) {
            ctx->pc = 0x352744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352740u;
            // 0x352744: 0x8e63014c  lw          $v1, 0x14C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352718;
        }
    }
    ctx->pc = 0x352748u;
label_352748:
    // 0x352748: 0x8e64014c  lw          $a0, 0x14C($s3)
    ctx->pc = 0x352748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x35274c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35274Cu;
    {
        const bool branch_taken_0x35274c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35274c) {
            ctx->pc = 0x352750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35274Cu;
            // 0x352750: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352760u;
            goto label_352760;
        }
    }
    ctx->pc = 0x352754u;
    // 0x352754: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x352754u;
    SET_GPR_U32(ctx, 31, 0x35275Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x352754u, 0x35275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35275Cu;
label_35275c:
    // 0x35275c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x35275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_352760:
    // 0x352760: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x352760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352764: 0x8e630140  lw          $v1, 0x140($s3)
    ctx->pc = 0x352764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x352768: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x352768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35276c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x35276cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x352770: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x352770u;
    SET_GPR_U32(ctx, 31, 0x352778u);
    ctx->pc = 0x352774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352770u;
    // 0x352774: 0xae620148  sw          $v0, 0x148($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x352770u, 0x352778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352778u;
label_352778:
    // 0x352778: 0xae62014c  sw          $v0, 0x14C($s3)
    ctx->pc = 0x352778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 332), GPR_U32(ctx, 2));
    // 0x35277c: 0x0  nop
    ctx->pc = 0x35277cu;
    // NOP
label_352780:
    // 0x352780: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x352780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x352784: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x352784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352788: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x352788u;
    {
        const bool branch_taken_0x352788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352788u;
        // 0x35278c: 0x148880  sll         $s1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352788) {
            ctx->pc = 0x3527D0u;
            goto label_3527d0;
        }
    }
    ctx->pc = 0x352790u;
    // 0x352790: 0x8e72014c  lw          $s2, 0x14C($s3)
    ctx->pc = 0x352790u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x352794: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x352794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x352798: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x352798u;
    SET_GPR_U32(ctx, 31, 0x3527A0u);
    ctx->pc = 0x35279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352798u;
    // 0x35279c: 0x2329021  addu        $s2, $s1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x352798u, 0x3527A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3527A0u;
label_3527a0:
    // 0x3527a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3527a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3527a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3527A4u;
    SET_GPR_U32(ctx, 31, 0x3527ACu);
    ctx->pc = 0x3527A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3527A4u;
    // 0x3527a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3527A4u, 0x3527ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3527ACu;
label_3527ac:
    // 0x3527ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3527ACu;
    SET_GPR_U32(ctx, 31, 0x3527B4u);
    ctx->pc = 0x3527B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3527ACu;
    // 0x3527b0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3527ACu, 0x3527B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3527B4u;
label_3527b4:
    // 0x3527b4: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3527b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x3527b8: 0x8e62014c  lw          $v0, 0x14C($s3)
    ctx->pc = 0x3527b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x3527bc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3527bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3527c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3527c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3527c4: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3527C4u;
    {
        const bool branch_taken_0x3527c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3527c4) {
            ctx->pc = 0x3527C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3527C4u;
            // 0x3527c8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352780;
        }
    }
    ctx->pc = 0x3527CCu;
    // 0x3527cc: 0xae740148  sw          $s4, 0x148($s3)
    ctx->pc = 0x3527ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 20));
label_3527d0:
    // 0x3527d0: 0x8e640148  lw          $a0, 0x148($s3)
    ctx->pc = 0x3527d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x3527d4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3527d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3527d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3527d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3527dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3527dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3527e0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3527E0u;
    SET_GPR_U32(ctx, 31, 0x3527E8u);
    ctx->pc = 0x3527E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3527E0u;
    // 0x3527e4: 0x822018  mult        $a0, $a0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3527E0u, 0x3527E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3527E8u;
label_3527e8:
    // 0x3527e8: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x3527e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x3527ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3527ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3527f0: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3527F0u;
    {
        const bool branch_taken_0x3527f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3527F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3527F0u;
        // 0x3527f4: 0xae620150  sw          $v0, 0x150($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3527f0) {
            ctx->pc = 0x352854u;
            goto label_352854;
        }
    }
    ctx->pc = 0x3527F8u;
    // 0x3527f8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3527f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3527fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3527fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x352800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x352800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352804: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x352804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_352808:
    // 0x352808: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x352808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x35280c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x35280cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x352810: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x352810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x352814: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x352814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x352818: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x352818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x35281c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x35281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x352820: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x352820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x352824: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x352824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x352828: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x352828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x35282c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x35282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x352830: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x352830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x352834: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352838: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x352838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x35283c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x35283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x352840: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x352840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x352844: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352848: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x352848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x35284c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x35284Cu;
    {
        const bool branch_taken_0x35284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35284Cu;
        // 0x352850: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35284c) {
            ctx->pc = 0x352808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352808;
        }
    }
    ctx->pc = 0x352854u;
label_352854:
    // 0x352854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x352854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x352858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35285c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35285cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352860: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x352860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352864: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x352864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352868: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x352868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35286c: 0x3e00008  jr          $ra
    ctx->pc = 0x35286Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35286Cu;
        // 0x352870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35286Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352874u;
    // 0x352874: 0x0  nop
    ctx->pc = 0x352874u;
    // NOP
    ctx->pc = 0x352878u;
}
