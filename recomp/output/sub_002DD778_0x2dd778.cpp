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

// Function: sub_002DD778
// Address: 0x2dd778 - 0x2dd920
void sub_002DD778_0x2dd778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD778_0x2dd778");
#endif

    switch (ctx->pc) {
        case 0x2dd7a4u: goto label_2dd7a4;
        case 0x2dd818u: goto label_2dd818;
        case 0x2dd824u: goto label_2dd824;
        case 0x2dd82cu: goto label_2dd82c;
        case 0x2dd838u: goto label_2dd838;
        case 0x2dd844u: goto label_2dd844;
        case 0x2dd850u: goto label_2dd850;
        case 0x2dd858u: goto label_2dd858;
        case 0x2dd864u: goto label_2dd864;
        case 0x2dd870u: goto label_2dd870;
        case 0x2dd87cu: goto label_2dd87c;
        case 0x2dd884u: goto label_2dd884;
        case 0x2dd890u: goto label_2dd890;
        case 0x2dd8f8u: goto label_2dd8f8;
        default: break;
    }

    ctx->pc = 0x2dd778u;

    // 0x2dd778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dd77c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2dd77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2dd780: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2dd780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2dd784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dd784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd788: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2dd788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd78c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dd78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dd790: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2dd790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dd794: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2dd794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2dd798: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2dd798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2dd79c: 0xc0b7188  jal         func_2DC620
    ctx->pc = 0x2DD79Cu;
    SET_GPR_U32(ctx, 31, 0x2DD7A4u);
    ctx->pc = 0x2DD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD79Cu;
    // 0x2dd7a0: 0x26330090  addiu       $s3, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC620u, 0x2DD79Cu, 0x2DD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7A4u;
label_2dd7a4:
    // 0x2dd7a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2dd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2dd7a8: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2dd7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2dd7ac: 0x24423f68  addiu       $v0, $v0, 0x3F68
    ctx->pc = 0x2dd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16232));
    // 0x2dd7b0: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x2dd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2dd7b4: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x2dd7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x2dd7b8: 0x262600c0  addiu       $a2, $s1, 0xC0
    ctx->pc = 0x2dd7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2dd7bc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2dd7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2dd7c0: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x2dd7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x2dd7c4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2dd7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x2dd7c8: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x2dd7c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x2dd7cc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2dd7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x2dd7d0: 0x26525ad0  addiu       $s2, $s2, 0x5AD0
    ctx->pc = 0x2dd7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 23248));
    // 0x2dd7d4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x2dd7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x2dd7d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2dd7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dd7dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2dd7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2dd7e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dd7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dd7e8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2dd7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2dd7ec: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2dd7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x2dd7f0: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x2dd7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x2dd7f4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2dd7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2dd7f8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2dd7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2dd7fc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2dd7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2dd800: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x2dd800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x2dd804: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2dd804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2dd808: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dd808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2dd80c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2dd80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2dd810: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2DD810u;
    SET_GPR_U32(ctx, 31, 0x2DD818u);
    ctx->pc = 0x2DD814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD810u;
    // 0x2dd814: 0xae2000e0  sw          $zero, 0xE0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2DD810u, 0x2DD818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD818u;
label_2dd818:
    // 0x2dd818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd81c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD81Cu;
    SET_GPR_U32(ctx, 31, 0x2DD824u);
    ctx->pc = 0x2DD820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD81Cu;
    // 0x2dd820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD81Cu, 0x2DD824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD824u;
label_2dd824:
    // 0x2dd824: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD824u;
    SET_GPR_U32(ctx, 31, 0x2DD82Cu);
    ctx->pc = 0x2DD828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD824u;
    // 0x2dd828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD824u, 0x2DD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD82Cu;
label_2dd82c:
    // 0x2dd82c: 0xae300084  sw          $s0, 0x84($s1)
    ctx->pc = 0x2dd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
    // 0x2dd830: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD830u;
    SET_GPR_U32(ctx, 31, 0x2DD838u);
    ctx->pc = 0x2DD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD830u;
    // 0x2dd834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD830u, 0x2DD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD838u;
label_2dd838:
    // 0x2dd838: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2dd838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dd83c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2DD83Cu;
    SET_GPR_U32(ctx, 31, 0x2DD844u);
    ctx->pc = 0x2DD840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD83Cu;
    // 0x2dd840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2DD83Cu, 0x2DD844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD844u;
label_2dd844:
    // 0x2dd844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd848: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD848u;
    SET_GPR_U32(ctx, 31, 0x2DD850u);
    ctx->pc = 0x2DD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD848u;
    // 0x2dd84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD848u, 0x2DD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD850u;
label_2dd850:
    // 0x2dd850: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD850u;
    SET_GPR_U32(ctx, 31, 0x2DD858u);
    ctx->pc = 0x2DD854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD850u;
    // 0x2dd854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD850u, 0x2DD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD858u;
label_2dd858:
    // 0x2dd858: 0xae3000b0  sw          $s0, 0xB0($s1)
    ctx->pc = 0x2dd858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 16));
    // 0x2dd85c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD85Cu;
    SET_GPR_U32(ctx, 31, 0x2DD864u);
    ctx->pc = 0x2DD860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD85Cu;
    // 0x2dd860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD85Cu, 0x2DD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD864u;
label_2dd864:
    // 0x2dd864: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2dd864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dd868: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2DD868u;
    SET_GPR_U32(ctx, 31, 0x2DD870u);
    ctx->pc = 0x2DD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD868u;
    // 0x2dd86c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2DD868u, 0x2DD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD870u;
label_2dd870:
    // 0x2dd870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd874: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD874u;
    SET_GPR_U32(ctx, 31, 0x2DD87Cu);
    ctx->pc = 0x2DD878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD874u;
    // 0x2dd878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD874u, 0x2DD87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD87Cu;
label_2dd87c:
    // 0x2dd87c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD87Cu;
    SET_GPR_U32(ctx, 31, 0x2DD884u);
    ctx->pc = 0x2DD880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD87Cu;
    // 0x2dd880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD87Cu, 0x2DD884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD884u;
label_2dd884:
    // 0x2dd884: 0xae300088  sw          $s0, 0x88($s1)
    ctx->pc = 0x2dd884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 16));
    // 0x2dd888: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DD888u;
    SET_GPR_U32(ctx, 31, 0x2DD890u);
    ctx->pc = 0x2DD88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD888u;
    // 0x2dd88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DD888u, 0x2DD890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD890u;
label_2dd890:
    // 0x2dd890: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x2dd890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x2dd894: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x2dd894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2dd898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dd898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd89c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2dd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2dd8a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dd8a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd8a4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2dd8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd8a8: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2dd8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2dd8ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dd8acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd8b0: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x2dd8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd8b4: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2dd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2dd8b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dd8b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd8bc: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2dd8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd8c0: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2dd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2dd8c4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2dd8c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dd8c8: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x2dd8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd8cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2dd8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2dd8d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2dd8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2dd8d4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2dd8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2dd8d8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2dd8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2dd8dc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dd8dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd8e0: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x2dd8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd8e4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2dd8e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dd8e8: 0xfa2100a0  sqc2        $vf1, 0xA0($s1)
    ctx->pc = 0x2dd8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dd8ec: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2dd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x2dd8f0: 0xc0b7a2a  jal         func_2DE8A8
    ctx->pc = 0x2DD8F0u;
    SET_GPR_U32(ctx, 31, 0x2DD8F8u);
    ctx->pc = 0x2DD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8F0u;
    // 0x2dd8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8A8u, 0x2DD8F0u, 0x2DD8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8F8u;
label_2dd8f8:
    // 0x2dd8f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dd8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd900: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dd900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd904: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2dd904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd908: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2dd908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dd90c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2dd90cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd910: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2dd910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dd914: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD914u;
        // 0x2dd918: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD91Cu;
    // 0x2dd91c: 0x0  nop
    ctx->pc = 0x2dd91cu;
    // NOP
    ctx->pc = 0x2dd920u;
}
