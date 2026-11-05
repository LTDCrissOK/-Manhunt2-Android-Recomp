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

// Function: sub_0019F198
// Address: 0x19f198 - 0x19f368
void sub_0019F198_0x19f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F198_0x19f198");
#endif

    switch (ctx->pc) {
        case 0x19f1ccu: goto label_19f1cc;
        case 0x19f1e4u: goto label_19f1e4;
        case 0x19f20cu: goto label_19f20c;
        case 0x19f22cu: goto label_19f22c;
        case 0x19f238u: goto label_19f238;
        case 0x19f244u: goto label_19f244;
        case 0x19f250u: goto label_19f250;
        case 0x19f25cu: goto label_19f25c;
        case 0x19f268u: goto label_19f268;
        case 0x19f274u: goto label_19f274;
        case 0x19f280u: goto label_19f280;
        case 0x19f28cu: goto label_19f28c;
        case 0x19f2a0u: goto label_19f2a0;
        case 0x19f2b4u: goto label_19f2b4;
        case 0x19f2d4u: goto label_19f2d4;
        case 0x19f2dcu: goto label_19f2dc;
        case 0x19f2e4u: goto label_19f2e4;
        case 0x19f2f8u: goto label_19f2f8;
        case 0x19f304u: goto label_19f304;
        case 0x19f310u: goto label_19f310;
        case 0x19f320u: goto label_19f320;
        default: break;
    }

    ctx->pc = 0x19f198u;

    // 0x19f198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19f1a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19f1a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19f1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f1b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f1b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19f1b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19f1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x19f1bc: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x19f1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x19f1c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19f1c4: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x19F1C4u;
    SET_GPR_U32(ctx, 31, 0x19F1CCu);
    ctx->pc = 0x19F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1C4u;
    // 0x19f1c8: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x19F1C4u, 0x19F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1CCu;
label_19f1cc:
    // 0x19f1cc: 0x265100a0  addiu       $s1, $s2, 0xA0
    ctx->pc = 0x19f1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x19f1d0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x19f1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1d8: 0x24421318  addiu       $v0, $v0, 0x1318
    ctx->pc = 0x19f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4888));
    // 0x19f1dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19F1DCu;
    SET_GPR_U32(ctx, 31, 0x19F1E4u);
    ctx->pc = 0x19F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1DCu;
    // 0x19f1e0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19F1DCu, 0x19F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1E4u;
label_19f1e4:
    // 0x19f1e4: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x19f1e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x19f1e8: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x19f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x19f1ec: 0x26940f90  addiu       $s4, $s4, 0xF90
    ctx->pc = 0x19f1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x19f1f0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x19f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19f1f4: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x19f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
    // 0x19f1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1fc: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x19f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
    // 0x19f200: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x19f200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19f204: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19F204u;
    SET_GPR_U32(ctx, 31, 0x19F20Cu);
    ctx->pc = 0x19F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F204u;
    // 0x19f208: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19F204u, 0x19F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F20Cu;
label_19f20c:
    // 0x19f20c: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x19f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x19f210: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x19f210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x19f214: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x19f214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x19f218: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19f218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19f21c: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x19f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x19f220: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19f220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x19f224: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19F224u;
    SET_GPR_U32(ctx, 31, 0x19F22Cu);
    ctx->pc = 0x19F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F224u;
    // 0x19f228: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19F224u, 0x19F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F22Cu;
label_19f22c:
    // 0x19f22c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f230: 0xc06569c  jal         func_195A70
    ctx->pc = 0x19F230u;
    SET_GPR_U32(ctx, 31, 0x19F238u);
    ctx->pc = 0x19F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F230u;
    // 0x19f234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195A70u, 0x19F230u, 0x19F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F238u;
label_19f238:
    // 0x19f238: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x19f238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
    // 0x19f23c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19F23Cu;
    SET_GPR_U32(ctx, 31, 0x19F244u);
    ctx->pc = 0x19F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F23Cu;
    // 0x19f240: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19F23Cu, 0x19F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F244u;
label_19f244:
    // 0x19f244: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f248: 0xc064e44  jal         func_193910
    ctx->pc = 0x19F248u;
    SET_GPR_U32(ctx, 31, 0x19F250u);
    ctx->pc = 0x19F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F248u;
    // 0x19f24c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193910u, 0x19F248u, 0x19F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F250u;
label_19f250:
    // 0x19f250: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x19f250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x19f254: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19F254u;
    SET_GPR_U32(ctx, 31, 0x19F25Cu);
    ctx->pc = 0x19F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F254u;
    // 0x19f258: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19F254u, 0x19F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F25Cu;
label_19f25c:
    // 0x19f25c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f260: 0xc0644de  jal         func_191378
    ctx->pc = 0x19F260u;
    SET_GPR_U32(ctx, 31, 0x19F268u);
    ctx->pc = 0x19F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F260u;
    // 0x19f264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191378u, 0x19F260u, 0x19F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F268u;
label_19f268:
    // 0x19f268: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x19f268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x19f26c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19F26Cu;
    SET_GPR_U32(ctx, 31, 0x19F274u);
    ctx->pc = 0x19F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F26Cu;
    // 0x19f270: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19F26Cu, 0x19F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F274u;
label_19f274:
    // 0x19f274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f278: 0xc06480a  jal         func_192028
    ctx->pc = 0x19F278u;
    SET_GPR_U32(ctx, 31, 0x19F280u);
    ctx->pc = 0x19F27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F278u;
    // 0x19f27c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192028u, 0x19F278u, 0x19F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F280u;
label_19f280:
    // 0x19f280: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x19f280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x19f284: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19F284u;
    SET_GPR_U32(ctx, 31, 0x19F28Cu);
    ctx->pc = 0x19F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F284u;
    // 0x19f288: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19F284u, 0x19F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F28Cu;
label_19f28c:
    // 0x19f28c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f290: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f298: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x19F298u;
    SET_GPR_U32(ctx, 31, 0x19F2A0u);
    ctx->pc = 0x19F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F298u;
    // 0x19f29c: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x19F298u, 0x19F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2A0u;
label_19f2a0:
    // 0x19f2a0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x19f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x19f2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2a8: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x19f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
    // 0x19f2ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19F2ACu;
    SET_GPR_U32(ctx, 31, 0x19F2B4u);
    ctx->pc = 0x19F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2ACu;
    // 0x19f2b0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19F2ACu, 0x19F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2B4u;
label_19f2b4:
    // 0x19f2b4: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x19f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x19f2b8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x19f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x19f2bc: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x19f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x19f2c0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19f2c4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x19f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x19f2c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x19f2cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19F2CCu;
    SET_GPR_U32(ctx, 31, 0x19F2D4u);
    ctx->pc = 0x19F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2CCu;
    // 0x19f2d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19F2CCu, 0x19F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2D4u;
label_19f2d4:
    // 0x19f2d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19F2D4u;
    SET_GPR_U32(ctx, 31, 0x19F2DCu);
    ctx->pc = 0x19F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2D4u;
    // 0x19f2d8: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19F2D4u, 0x19F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2DCu;
label_19f2dc:
    // 0x19f2dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19F2DCu;
    SET_GPR_U32(ctx, 31, 0x19F2E4u);
    ctx->pc = 0x19F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2DCu;
    // 0x19f2e0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19F2DCu, 0x19F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2E4u;
label_19f2e4:
    // 0x19f2e4: 0xae5000d4  sw          $s0, 0xD4($s2)
    ctx->pc = 0x19f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 16));
    // 0x19f2e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f2ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19f2f0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19F2F0u;
    SET_GPR_U32(ctx, 31, 0x19F2F8u);
    ctx->pc = 0x19F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2F0u;
    // 0x19f2f4: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19F2F0u, 0x19F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2F8u;
label_19f2f8:
    // 0x19f2f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f2fc: 0xc062fdc  jal         func_18BF70
    ctx->pc = 0x19F2FCu;
    SET_GPR_U32(ctx, 31, 0x19F304u);
    ctx->pc = 0x19F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2FCu;
    // 0x19f300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BF70u, 0x19F2FCu, 0x19F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F304u;
label_19f304:
    // 0x19f304: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x19f304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
    // 0x19f308: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x19F308u;
    SET_GPR_U32(ctx, 31, 0x19F310u);
    ctx->pc = 0x19F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F308u;
    // 0x19f30c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x19F308u, 0x19F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F310u;
label_19f310:
    // 0x19f310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f314: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19f314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f318: 0xc0635bc  jal         func_18D6F0
    ctx->pc = 0x19F318u;
    SET_GPR_U32(ctx, 31, 0x19F320u);
    ctx->pc = 0x19F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F318u;
    // 0x19f31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6F0u, 0x19F318u, 0x19F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F320u;
label_19f320:
    // 0x19f320: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x19f320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x19f324: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f328: 0x246310f8  addiu       $v1, $v1, 0x10F8
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4344));
    // 0x19f32c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x19f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x19f330: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x19f330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x19f334: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19f338: 0xae5000dc  sw          $s0, 0xDC($s2)
    ctx->pc = 0x19f338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 16));
    // 0x19f33c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f340: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x19f340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x19f344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19f350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f354: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19f354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f358: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x19f358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f35c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f360: 0x3e00008  jr          $ra
    ctx->pc = 0x19F360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F360u;
        // 0x19f364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F368u;
}
