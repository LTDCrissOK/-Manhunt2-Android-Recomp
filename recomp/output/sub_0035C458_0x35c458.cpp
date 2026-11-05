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

// Function: sub_0035C458
// Address: 0x35c458 - 0x35cb58
void sub_0035C458_0x35c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C458_0x35c458");
#endif

    switch (ctx->pc) {
        case 0x35c520u: goto label_35c520;
        case 0x35c52cu: goto label_35c52c;
        case 0x35c548u: goto label_35c548;
        case 0x35c554u: goto label_35c554;
        case 0x35c574u: goto label_35c574;
        case 0x35c58cu: goto label_35c58c;
        case 0x35c59cu: goto label_35c59c;
        case 0x35c600u: goto label_35c600;
        case 0x35c60cu: goto label_35c60c;
        case 0x35c648u: goto label_35c648;
        case 0x35c654u: goto label_35c654;
        case 0x35c690u: goto label_35c690;
        case 0x35c698u: goto label_35c698;
        case 0x35c7ccu: goto label_35c7cc;
        case 0x35c7e4u: goto label_35c7e4;
        case 0x35c824u: goto label_35c824;
        case 0x35c850u: goto label_35c850;
        case 0x35c910u: goto label_35c910;
        case 0x35c9b0u: goto label_35c9b0;
        case 0x35cad0u: goto label_35cad0;
        case 0x35caf8u: goto label_35caf8;
        default: break;
    }

    ctx->pc = 0x35c458u;

    // 0x35c458: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x35c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
    // 0x35c45c: 0xffb303a8  sd          $s3, 0x3A8($sp)
    ctx->pc = 0x35c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 936), GPR_U64(ctx, 19));
    // 0x35c460: 0xffb00390  sd          $s0, 0x390($sp)
    ctx->pc = 0x35c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 16));
    // 0x35c464: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35c464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c468: 0xffb10398  sd          $s1, 0x398($sp)
    ctx->pc = 0x35c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 920), GPR_U64(ctx, 17));
    // 0x35c46c: 0xffb203a0  sd          $s2, 0x3A0($sp)
    ctx->pc = 0x35c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 18));
    // 0x35c470: 0xffb403b0  sd          $s4, 0x3B0($sp)
    ctx->pc = 0x35c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 20));
    // 0x35c474: 0xffb503b8  sd          $s5, 0x3B8($sp)
    ctx->pc = 0x35c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 952), GPR_U64(ctx, 21));
    // 0x35c478: 0xffb603c0  sd          $s6, 0x3C0($sp)
    ctx->pc = 0x35c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 22));
    // 0x35c47c: 0xffb703c8  sd          $s7, 0x3C8($sp)
    ctx->pc = 0x35c47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 968), GPR_U64(ctx, 23));
    // 0x35c480: 0xffbe03d0  sd          $fp, 0x3D0($sp)
    ctx->pc = 0x35c480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 30));
    // 0x35c484: 0xffbf03d8  sd          $ra, 0x3D8($sp)
    ctx->pc = 0x35c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 984), GPR_U64(ctx, 31));
    // 0x35c488: 0xe7b80400  swc1        $f24, 0x400($sp)
    ctx->pc = 0x35c488u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
    // 0x35c48c: 0xe7b703f8  swc1        $f23, 0x3F8($sp)
    ctx->pc = 0x35c48cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
    // 0x35c490: 0xe7b603f0  swc1        $f22, 0x3F0($sp)
    ctx->pc = 0x35c490u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
    // 0x35c494: 0xe7b503e8  swc1        $f21, 0x3E8($sp)
    ctx->pc = 0x35c494u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
    // 0x35c498: 0xe7b403e0  swc1        $f20, 0x3E0($sp)
    ctx->pc = 0x35c498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
    // 0x35c49c: 0x8e6205e0  lw          $v0, 0x5E0($s3)
    ctx->pc = 0x35c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1504)));
    // 0x35c4a0: 0x1040019b  beqz        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x35C4A0u;
    {
        const bool branch_taken_0x35c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4A0u;
        // 0x35c4a4: 0x27a302e0  addiu       $v1, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c4a0) {
            ctx->pc = 0x35CB10u;
            goto label_35cb10;
        }
    }
    ctx->pc = 0x35C4A8u;
    // 0x35c4a8: 0x27a202f0  addiu       $v0, $sp, 0x2F0
    ctx->pc = 0x35c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x35c4ac: 0xafa20384  sw          $v0, 0x384($sp)
    ctx->pc = 0x35c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 2));
    // 0x35c4b0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x35c4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c4b4: 0x27a20320  addiu       $v0, $sp, 0x320
    ctx->pc = 0x35c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x35c4b8: 0xafa3037c  sw          $v1, 0x37C($sp)
    ctx->pc = 0x35c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 3));
    // 0x35c4bc: 0xafa20364  sw          $v0, 0x364($sp)
    ctx->pc = 0x35c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 2));
    // 0x35c4c0: 0x27a30310  addiu       $v1, $sp, 0x310
    ctx->pc = 0x35c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x35c4c4: 0x27a202c0  addiu       $v0, $sp, 0x2C0
    ctx->pc = 0x35c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x35c4c8: 0xafa30360  sw          $v1, 0x360($sp)
    ctx->pc = 0x35c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 3));
    // 0x35c4cc: 0xafa20378  sw          $v0, 0x378($sp)
    ctx->pc = 0x35c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 888), GPR_U32(ctx, 2));
    // 0x35c4d0: 0x27a30250  addiu       $v1, $sp, 0x250
    ctx->pc = 0x35c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x35c4d4: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x35c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x35c4d8: 0xafa30388  sw          $v1, 0x388($sp)
    ctx->pc = 0x35c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 904), GPR_U32(ctx, 3));
    // 0x35c4dc: 0xafa2036c  sw          $v0, 0x36C($sp)
    ctx->pc = 0x35c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 2));
    // 0x35c4e0: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x35c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x35c4e4: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x35c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x35c4e8: 0xafa30374  sw          $v1, 0x374($sp)
    ctx->pc = 0x35c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 3));
    // 0x35c4ec: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x35c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
    // 0x35c4f0: 0x26630610  addiu       $v1, $s3, 0x610
    ctx->pc = 0x35c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1552));
    // 0x35c4f4: 0x27a20340  addiu       $v0, $sp, 0x340
    ctx->pc = 0x35c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x35c4f8: 0xafa30370  sw          $v1, 0x370($sp)
    ctx->pc = 0x35c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 3));
    // 0x35c4fc: 0xafa20368  sw          $v0, 0x368($sp)
    ctx->pc = 0x35c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 2));
    // 0x35c500: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x35c500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35c504: 0x27b50120  addiu       $s5, $sp, 0x120
    ctx->pc = 0x35c504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x35c508: 0x27b402d0  addiu       $s4, $sp, 0x2D0
    ctx->pc = 0x35c508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x35c50c: 0x27b70300  addiu       $s7, $sp, 0x300
    ctx->pc = 0x35c50cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x35c510: 0x27b60290  addiu       $s6, $sp, 0x290
    ctx->pc = 0x35c510u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x35c514: 0x27be0330  addiu       $fp, $sp, 0x330
    ctx->pc = 0x35c514u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x35c518: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35c518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c51c: 0x0  nop
    ctx->pc = 0x35c51cu;
    // NOP
label_35c520:
    // 0x35c520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c524: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35C524u;
    SET_GPR_U32(ctx, 31, 0x35C52Cu);
    ctx->pc = 0x35C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C524u;
    // 0x35c528: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35C524u, 0x35C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C52Cu;
label_35c52c:
    // 0x35c52c: 0x0  nop
    ctx->pc = 0x35c52cu;
    // NOP
    // 0x35c530: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35C530u;
    {
        const bool branch_taken_0x35c530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x35C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C530u;
        // 0x35c534: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c530) {
            ctx->pc = 0x35C520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c520;
        }
    }
    ctx->pc = 0x35C538u;
    // 0x35c538: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x35c538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c53c: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x35c53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35c540: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35c540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c544: 0x0  nop
    ctx->pc = 0x35c544u;
    // NOP
label_35c548:
    // 0x35c548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c54c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35C54Cu;
    SET_GPR_U32(ctx, 31, 0x35C554u);
    ctx->pc = 0x35C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C54Cu;
    // 0x35c550: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35C54Cu, 0x35C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C554u;
label_35c554:
    // 0x35c554: 0x0  nop
    ctx->pc = 0x35c554u;
    // NOP
    // 0x35c558: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35C558u;
    {
        const bool branch_taken_0x35c558 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x35C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C558u;
        // 0x35c55c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c558) {
            ctx->pc = 0x35C548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c548;
        }
    }
    ctx->pc = 0x35C560u;
    // 0x35c560: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x35c560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x35c564: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x35c564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x35c568: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x35c568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x35c56c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35C56Cu;
    SET_GPR_U32(ctx, 31, 0x35C574u);
    ctx->pc = 0x35C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C56Cu;
    // 0x35c570: 0x27a40240  addiu       $a0, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35C56Cu, 0x35C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C574u;
label_35c574:
    // 0x35c574: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35c574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x35c578: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x35c578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x35c57c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x35c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x35c580: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x35c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x35c584: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x35C584u;
    SET_GPR_U32(ctx, 31, 0x35C58Cu);
    ctx->pc = 0x35C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C584u;
    // 0x35c588: 0x24705b30  addiu       $s0, $v1, 0x5B30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35C584u, 0x35C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C58Cu;
label_35c58c:
    // 0x35c58c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x35c590: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x35c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x35c594: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x35C594u;
    SET_GPR_U32(ctx, 31, 0x35C59Cu);
    ctx->pc = 0x35C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C594u;
    // 0x35c598: 0x24525b40  addiu       $s2, $v0, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35C594u, 0x35C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C59Cu;
label_35c59c:
    // 0x35c59c: 0x8e6305e0  lw          $v1, 0x5E0($s3)
    ctx->pc = 0x35c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1504)));
    // 0x35c5a0: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x35c5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x35c5a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x35c5a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x35c5a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x35c5a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35c5ac: 0xc4750374  lwc1        $f21, 0x374($v1)
    ctx->pc = 0x35c5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35c5b0: 0xc46003a0  lwc1        $f0, 0x3A0($v1)
    ctx->pc = 0x35c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c5b4: 0xc474039c  lwc1        $f20, 0x39C($v1)
    ctx->pc = 0x35c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35c5b8: 0x3c013fb0  lui         $at, 0x3FB0
    ctx->pc = 0x35c5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16304 << 16));
    // 0x35c5bc: 0x3421ff43  ori         $at, $at, 0xFF43
    ctx->pc = 0x35c5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65347);
    // 0x35c5c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35c5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35c5c4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x35c5c4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x35c5c8: 0x3c01be76  lui         $at, 0xBE76
    ctx->pc = 0x35c5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48758 << 16));
    // 0x35c5cc: 0x34219446  ori         $at, $at, 0x9446
    ctx->pc = 0x35c5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37958);
    // 0x35c5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35c5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35c5d4: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x35c5d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x35c5d8: 0xe7a302d0  swc1        $f3, 0x2D0($sp)
    ctx->pc = 0x35c5d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x35c5dc: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x35c5dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x35c5e0: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x35c5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x35c5e4: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x35c5e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x35c5e8: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x35c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
    // 0x35c5ec: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x35c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x35c5f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35c5f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35c5f4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x35c5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c5f8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x35C5F8u;
    SET_GPR_U32(ctx, 31, 0x35C600u);
    ctx->pc = 0x35C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C5F8u;
    // 0x35c5fc: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x35C5F8u, 0x35C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C600u;
label_35c600:
    // 0x35c600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35c600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35c604: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x35C604u;
    SET_GPR_U32(ctx, 31, 0x35C60Cu);
    ctx->pc = 0x35C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C604u;
    // 0x35c608: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x35C604u, 0x35C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C60Cu;
label_35c60c:
    // 0x35c60c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x35c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x35c610: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x35c610u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x35c614: 0xc4615b30  lwc1        $f1, 0x5B30($v1)
    ctx->pc = 0x35c614u;
    { uint32_t bits = FAST_READ32(0x575B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c618: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x35c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35c61c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x35c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c620: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35c620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35c624: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35c624u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35c628: 0xe7b602ec  swc1        $f22, 0x2EC($sp)
    ctx->pc = 0x35c628u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 748), bits); }
    // 0x35c62c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35c62cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35c630: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x35c630u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x35c634: 0xe7a102e0  swc1        $f1, 0x2E0($sp)
    ctx->pc = 0x35c634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x35c638: 0xe7a302e8  swc1        $f3, 0x2E8($sp)
    ctx->pc = 0x35c638u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x35c63c: 0xe7a202e4  swc1        $f2, 0x2E4($sp)
    ctx->pc = 0x35c63cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x35c640: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x35C640u;
    SET_GPR_U32(ctx, 31, 0x35C648u);
    ctx->pc = 0x35C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C640u;
    // 0x35c644: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x35C640u, 0x35C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C648u;
label_35c648:
    // 0x35c648: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35c648u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x35c64c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x35C64Cu;
    SET_GPR_U32(ctx, 31, 0x35C654u);
    ctx->pc = 0x35C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C64Cu;
    // 0x35c650: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x35C64Cu, 0x35C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C654u;
label_35c654:
    // 0x35c654: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x35c658: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x35c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35c65c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x35c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c660: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x35c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c664: 0xc4425b40  lwc1        $f2, 0x5B40($v0)
    ctx->pc = 0x35c664u;
    { uint32_t bits = FAST_READ32(0x575B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c668: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35c668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35c66c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35c66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35c670: 0x8fa50384  lw          $a1, 0x384($sp)
    ctx->pc = 0x35c670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
    // 0x35c674: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35c674u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35c678: 0x8fa6037c  lw          $a2, 0x37C($sp)
    ctx->pc = 0x35c678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
    // 0x35c67c: 0xe7a302f8  swc1        $f3, 0x2F8($sp)
    ctx->pc = 0x35c67cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x35c680: 0xe7a102f4  swc1        $f1, 0x2F4($sp)
    ctx->pc = 0x35c680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
    // 0x35c684: 0xe7a202f0  swc1        $f2, 0x2F0($sp)
    ctx->pc = 0x35c684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x35c688: 0xc0b199e  jal         func_2C6678
    ctx->pc = 0x35C688u;
    SET_GPR_U32(ctx, 31, 0x35C690u);
    ctx->pc = 0x35C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C688u;
    // 0x35c68c: 0xe7b402fc  swc1        $f20, 0x2FC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6678u, 0x35C688u, 0x35C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C690u;
label_35c690:
    // 0x35c690: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35C690u;
    SET_GPR_U32(ctx, 31, 0x35C698u);
    ctx->pc = 0x35C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C690u;
    // 0x35c694: 0x8fa40364  lw          $a0, 0x364($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35C690u, 0x35C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C698u;
label_35c698:
    // 0x35c698: 0xc7a7030c  lwc1        $f7, 0x30C($sp)
    ctx->pc = 0x35c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35c69c: 0xc7ac02d0  lwc1        $f12, 0x2D0($sp)
    ctx->pc = 0x35c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35c6a0: 0xc7a90300  lwc1        $f9, 0x300($sp)
    ctx->pc = 0x35c6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x35c6a4: 0xc7ab0304  lwc1        $f11, 0x304($sp)
    ctx->pc = 0x35c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x35c6a8: 0x460c3942  mul.s       $f5, $f7, $f12
    ctx->pc = 0x35c6a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x35c6ac: 0xc7a402d8  lwc1        $f4, 0x2D8($sp)
    ctx->pc = 0x35c6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35c6b0: 0x460c4802  mul.s       $f0, $f9, $f12
    ctx->pc = 0x35c6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x35c6b4: 0xc7a802d4  lwc1        $f8, 0x2D4($sp)
    ctx->pc = 0x35c6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x35c6b8: 0x46004b87  neg.s       $f14, $f9
    ctx->pc = 0x35c6b8u;
    ctx->f[14] = FPU_NEG_S(ctx->f[9]);
    // 0x35c6bc: 0x46045882  mul.s       $f2, $f11, $f4
    ctx->pc = 0x35c6bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x35c6c0: 0xc7a10308  lwc1        $f1, 0x308($sp)
    ctx->pc = 0x35c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c6c4: 0x460858c2  mul.s       $f3, $f11, $f8
    ctx->pc = 0x35c6c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x35c6c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35c6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35c6cc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x35c6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x35c6d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35c6d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35c6d4: 0x8fa30364  lw          $v1, 0x364($sp)
    ctx->pc = 0x35c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
    // 0x35c6d8: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x35c6d8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x35c6dc: 0x46044982  mul.s       $f6, $f9, $f4
    ctx->pc = 0x35c6dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x35c6e0: 0x46083882  mul.s       $f2, $f7, $f8
    ctx->pc = 0x35c6e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x35c6e4: 0x46040a82  mul.s       $f10, $f1, $f4
    ctx->pc = 0x35c6e4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x35c6e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x35c6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x35c6ec: 0x460808c2  mul.s       $f3, $f1, $f8
    ctx->pc = 0x35c6ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x35c6f0: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x35c6f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x35c6f4: 0x46000987  neg.s       $f6, $f1
    ctx->pc = 0x35c6f4u;
    ctx->f[6] = FPU_NEG_S(ctx->f[1]);
    // 0x35c6f8: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x35c6f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x35c6fc: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x35c6fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x35c700: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x35c700u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x35c704: 0x46005a87  neg.s       $f10, $f11
    ctx->pc = 0x35c704u;
    ctx->f[10] = FPU_NEG_S(ctx->f[11]);
    // 0x35c708: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x35c708u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x35c70c: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x35c70cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x35c710: 0x46084a42  mul.s       $f9, $f9, $f8
    ctx->pc = 0x35c710u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x35c714: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x35c714u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x35c718: 0x460a2b42  mul.s       $f13, $f5, $f10
    ctx->pc = 0x35c718u;
    ctx->f[13] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x35c71c: 0x46072a02  mul.s       $f8, $f5, $f7
    ctx->pc = 0x35c71cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x35c720: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x35c720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x35c724: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x35c724u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x35c728: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x35c728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x35c72c: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x35c72cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x35c730: 0x460c5ac2  mul.s       $f11, $f11, $f12
    ctx->pc = 0x35c730u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x35c734: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x35c734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x35c738: 0x460e1142  mul.s       $f5, $f2, $f14
    ctx->pc = 0x35c738u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x35c73c: 0x460b2101  sub.s       $f4, $f4, $f11
    ctx->pc = 0x35c73cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x35c740: 0x46061182  mul.s       $f6, $f2, $f6
    ctx->pc = 0x35c740u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x35c744: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x35c744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x35c748: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x35c748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x35c74c: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x35c74cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x35c750: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x35c750u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x35c754: 0x460a2282  mul.s       $f10, $f4, $f10
    ctx->pc = 0x35c754u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    // 0x35c758: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x35c758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x35c75c: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x35c75cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x35c760: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x35c760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x35c764: 0x460e2102  mul.s       $f4, $f4, $f14
    ctx->pc = 0x35c764u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x35c768: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x35c768u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x35c76c: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x35c76cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x35c770: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x35c770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x35c774: 0xe7a30328  swc1        $f3, 0x328($sp)
    ctx->pc = 0x35c774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x35c778: 0xe7a10320  swc1        $f1, 0x320($sp)
    ctx->pc = 0x35c778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x35c77c: 0xe7a00324  swc1        $f0, 0x324($sp)
    ctx->pc = 0x35c77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
    // 0x35c780: 0xe46f000c  swc1        $f15, 0xC($v1)
    ctx->pc = 0x35c780u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x35c784: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x35c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c788: 0xc7a10324  lwc1        $f1, 0x324($sp)
    ctx->pc = 0x35c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c78c: 0xc7a20328  lwc1        $f2, 0x328($sp)
    ctx->pc = 0x35c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c790: 0xc7a3032c  lwc1        $f3, 0x32C($sp)
    ctx->pc = 0x35c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35c794: 0xe7a00310  swc1        $f0, 0x310($sp)
    ctx->pc = 0x35c794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x35c798: 0xe7a10314  swc1        $f1, 0x314($sp)
    ctx->pc = 0x35c798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
    // 0x35c79c: 0xe7a20318  swc1        $f2, 0x318($sp)
    ctx->pc = 0x35c79cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x35c7a0: 0xe7a3031c  swc1        $f3, 0x31C($sp)
    ctx->pc = 0x35c7a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 796), bits); }
    // 0x35c7a4: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x35c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x35c7a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35c7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c7ac: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x35c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c7b0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35c7b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35c7b4: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35c7b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35c7b8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35c7b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c7bc: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x35c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c7c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x35c7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7c4: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x35C7C4u;
    SET_GPR_U32(ctx, 31, 0x35C7CCu);
    ctx->pc = 0x35C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7C4u;
    // 0x35c7c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x35C7C4u, 0x35C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7CCu;
label_35c7cc:
    // 0x35c7cc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35c7ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35c7d0: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x35c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c7d4: 0x8fa40388  lw          $a0, 0x388($sp)
    ctx->pc = 0x35c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x35c7d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7dc: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x35C7DCu;
    SET_GPR_U32(ctx, 31, 0x35C7E4u);
    ctx->pc = 0x35C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7DCu;
    // 0x35c7e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x35C7DCu, 0x35C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7E4u;
label_35c7e4:
    // 0x35c7e4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x35c7e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x35c7e8: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c7ec: 0x8fa3036c  lw          $v1, 0x36C($sp)
    ctx->pc = 0x35c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
    // 0x35c7f0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35c7f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35c7f4: 0xfa610010  sqc2        $vf1, 0x10($s3)
    ctx->pc = 0x35c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c7f8: 0x8fa20374  lw          $v0, 0x374($sp)
    ctx->pc = 0x35c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
    // 0x35c7fc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35c7fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c800: 0xfa610020  sqc2        $vf1, 0x20($s3)
    ctx->pc = 0x35c800u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c804: 0x8fa30378  lw          $v1, 0x378($sp)
    ctx->pc = 0x35c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
    // 0x35c808: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35c808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35c80c: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x35c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c810: 0x8e6205e0  lw          $v0, 0x5E0($s3)
    ctx->pc = 0x35c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1504)));
    // 0x35c814: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x35c814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c818: 0x8fa60380  lw          $a2, 0x380($sp)
    ctx->pc = 0x35c818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x35c81c: 0xc0d6f8c  jal         func_35BE30
    ctx->pc = 0x35C81Cu;
    SET_GPR_U32(ctx, 31, 0x35C824u);
    ctx->pc = 0x35C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C81Cu;
    // 0x35c820: 0x8c4400b8  lw          $a0, 0xB8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BE30u, 0x35C81Cu, 0x35C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C824u;
label_35c824:
    // 0x35c824: 0x8fa50360  lw          $a1, 0x360($sp)
    ctx->pc = 0x35c824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x35c828: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35c828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c82c: 0x3c093d4c  lui         $t1, 0x3D4C
    ctx->pc = 0x35c82cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15692 << 16));
    // 0x35c830: 0x3529cccd  ori         $t1, $t1, 0xCCCD
    ctx->pc = 0x35c830u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)52429);
    // 0x35c834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c838: 0x8fa80380  lw          $t0, 0x380($sp)
    ctx->pc = 0x35c838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x35c83c: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x35c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x35c840: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x35c840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x35c844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35c844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35c848: 0x8fa70388  lw          $a3, 0x388($sp)
    ctx->pc = 0x35c848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x35c84c: 0x0  nop
    ctx->pc = 0x35c84cu;
    // NOP
label_35c850:
    // 0x35c850: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x35c850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35c854: 0xfba10310  sqc2        $vf1, 0x310($sp)
    ctx->pc = 0x35c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c858: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35c858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35c85c: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x35c85cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x35c860: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35c860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c864: 0xfba10310  sqc2        $vf1, 0x310($sp)
    ctx->pc = 0x35c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c868: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35c868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35c86c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x35c86cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35c870: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35c870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c874: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x35c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c878: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x35c878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c87c: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x35c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x35c880: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x35c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35c884: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35c884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x35c888: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x35c888u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x35c88c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35c890: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x35C890u;
    {
        const bool branch_taken_0x35c890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x35C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C890u;
        // 0x35c894: 0xe7a00244  swc1        $f0, 0x244($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c890) {
            ctx->pc = 0x35C8CCu;
            goto label_35c8cc;
        }
    }
    ctx->pc = 0x35C898u;
    // 0x35c898: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35c898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35c89c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35c89cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c8a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35c8a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35c8a4: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35c8a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35c8a8: 0xd8e30010  lqc2        $vf3, 0x10($a3)
    ctx->pc = 0x35c8a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x35c8ac: 0xd8e40020  lqc2        $vf4, 0x20($a3)
    ctx->pc = 0x35c8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x35c8b0: 0xd8e50030  lqc2        $vf5, 0x30($a3)
    ctx->pc = 0x35c8b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x35c8b4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x35c8b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c8b8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x35c8b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c8bc: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x35c8bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c8c0: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x35c8c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c8c4: 0xf861fee0  sqc2        $vf1, -0x120($v1)
    ctx->pc = 0x35c8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967008), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c8c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x35c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_35c8cc:
    // 0x35c8cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35c8d0: 0x28820024  slti        $v0, $a0, 0x24
    ctx->pc = 0x35c8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x35c8d4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x35C8D4u;
    {
        const bool branch_taken_0x35c8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c8d4) {
            ctx->pc = 0x35C850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c850;
        }
    }
    ctx->pc = 0x35C8DCu;
    // 0x35c8dc: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x35c8dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35c8e0: 0xfa6105f0  sqc2        $vf1, 0x5F0($s3)
    ctx->pc = 0x35c8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 1520), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c8e4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x35c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35c8e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35c8ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x35c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x35c8f0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x35c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35c8f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35c8f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c8f8: 0xfa610600  sqc2        $vf1, 0x600($s3)
    ctx->pc = 0x35c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 1536), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c8fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35c8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c900: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c904: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35c904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c908: 0xc0d7082  jal         func_35C208
    ctx->pc = 0x35C908u;
    SET_GPR_U32(ctx, 31, 0x35C910u);
    ctx->pc = 0x35C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C908u;
    // 0x35c90c: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C208u, 0x35C908u, 0x35C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C910u;
label_35c910:
    // 0x35c910: 0x8e6305e0  lw          $v1, 0x5E0($s3)
    ctx->pc = 0x35c910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1504)));
    // 0x35c914: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x35c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x35c918: 0x8fa30370  lw          $v1, 0x370($sp)
    ctx->pc = 0x35c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x35c91c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35c920: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x35c924: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35c924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c928: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x35c928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35c92c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35c92cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c930: 0xfba10340  sqc2        $vf1, 0x340($sp)
    ctx->pc = 0x35c930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c934: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x35c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c938: 0xc7a10344  lwc1        $f1, 0x344($sp)
    ctx->pc = 0x35c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c93c: 0xc7a20348  lwc1        $f2, 0x348($sp)
    ctx->pc = 0x35c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c940: 0xe7a00330  swc1        $f0, 0x330($sp)
    ctx->pc = 0x35c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x35c944: 0xe7a10334  swc1        $f1, 0x334($sp)
    ctx->pc = 0x35c944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 820), bits); }
    // 0x35c948: 0xe7a20338  swc1        $f2, 0x338($sp)
    ctx->pc = 0x35c948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
    // 0x35c94c: 0xafa0033c  sw          $zero, 0x33C($sp)
    ctx->pc = 0x35c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 0));
    // 0x35c950: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x35c950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35c954: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35c954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c958: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35c958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c95c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35c95cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35c960: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35c960u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x35c964: 0x4a0003bf  vwaitq
    ctx->pc = 0x35c964u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x35c968: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35c968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c96c: 0xfba10330  sqc2        $vf1, 0x330($sp)
    ctx->pc = 0x35c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c970: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x35c970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x35c974: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35c974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x35c978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35c978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c97c: 0x0  nop
    ctx->pc = 0x35c97cu;
    // NOP
    // 0x35c980: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35c980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35c984: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x35c984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35c988: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x35c988u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x35c98c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35c98cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c990: 0xfba10330  sqc2        $vf1, 0x330($sp)
    ctx->pc = 0x35c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c994: 0x8e620624  lw          $v0, 0x624($s3)
    ctx->pc = 0x35c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1572)));
    // 0x35c998: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x35C998u;
    {
        const bool branch_taken_0x35c998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C998u;
        // 0x35c99c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c998) {
            ctx->pc = 0x35CA30u;
            goto label_35ca30;
        }
    }
    ctx->pc = 0x35C9A0u;
    // 0x35c9a0: 0x8fa40388  lw          $a0, 0x388($sp)
    ctx->pc = 0x35c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x35c9a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x35c9a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9a8: 0x8fa60368  lw          $a2, 0x368($sp)
    ctx->pc = 0x35c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x35c9ac: 0x266303b4  addiu       $v1, $s3, 0x3B4
    ctx->pc = 0x35c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 948));
label_35c9b0:
    // 0x35c9b0: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x35c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c9b4: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x35c9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c9b8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x35c9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c9bc: 0xe7a00340  swc1        $f0, 0x340($sp)
    ctx->pc = 0x35c9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x35c9c0: 0xe7a10344  swc1        $f1, 0x344($sp)
    ctx->pc = 0x35c9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
    // 0x35c9c4: 0xe7a20348  swc1        $f2, 0x348($sp)
    ctx->pc = 0x35c9c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
    // 0x35c9c8: 0xafa0034c  sw          $zero, 0x34C($sp)
    ctx->pc = 0x35c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 0));
    // 0x35c9cc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35c9ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35c9d0: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x35c9d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35c9d4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35c9d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35c9d8: 0xfba10340  sqc2        $vf1, 0x340($sp)
    ctx->pc = 0x35c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35c9dc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35c9dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35c9e0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35c9e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35c9e4: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x35c9e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35c9e8: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x35c9e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x35c9ec: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x35c9ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x35c9f0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x35c9f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c9f4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x35c9f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c9f8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x35c9f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35c9fc: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x35c9fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35ca00: 0xfba10340  sqc2        $vf1, 0x340($sp)
    ctx->pc = 0x35ca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35ca04: 0xc7a20340  lwc1        $f2, 0x340($sp)
    ctx->pc = 0x35ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ca08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35ca0c: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x35ca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ca10: 0xc7a10348  lwc1        $f1, 0x348($sp)
    ctx->pc = 0x35ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ca14: 0xe462fff8  swc1        $f2, -0x8($v1)
    ctx->pc = 0x35ca14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
    // 0x35ca18: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x35ca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x35ca1c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x35ca1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x35ca20: 0x8e620624  lw          $v0, 0x624($s3)
    ctx->pc = 0x35ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1572)));
    // 0x35ca24: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x35ca24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ca28: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x35CA28u;
    {
        const bool branch_taken_0x35ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA28u;
        // 0x35ca2c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca28) {
            ctx->pc = 0x35C9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c9b0;
        }
    }
    ctx->pc = 0x35CA30u;
label_35ca30:
    // 0x35ca30: 0x8e6305e0  lw          $v1, 0x5E0($s3)
    ctx->pc = 0x35ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1504)));
    // 0x35ca34: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x35ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x35ca38: 0x8fa30370  lw          $v1, 0x370($sp)
    ctx->pc = 0x35ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x35ca3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ca40: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x35ca44: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35ca44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35ca48: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35ca48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35ca4c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35ca4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35ca50: 0xfba10350  sqc2        $vf1, 0x350($sp)
    ctx->pc = 0x35ca50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35ca54: 0xc7a00350  lwc1        $f0, 0x350($sp)
    ctx->pc = 0x35ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ca58: 0xc7a10354  lwc1        $f1, 0x354($sp)
    ctx->pc = 0x35ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ca5c: 0xc7a20358  lwc1        $f2, 0x358($sp)
    ctx->pc = 0x35ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ca60: 0xc7a5035c  lwc1        $f5, 0x35C($sp)
    ctx->pc = 0x35ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35ca64: 0xe7a00340  swc1        $f0, 0x340($sp)
    ctx->pc = 0x35ca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x35ca68: 0xe7a10344  swc1        $f1, 0x344($sp)
    ctx->pc = 0x35ca68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
    // 0x35ca6c: 0xe7a20348  swc1        $f2, 0x348($sp)
    ctx->pc = 0x35ca6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
    // 0x35ca70: 0xe7a5034c  swc1        $f5, 0x34C($sp)
    ctx->pc = 0x35ca70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
    // 0x35ca74: 0x8fa20368  lw          $v0, 0x368($sp)
    ctx->pc = 0x35ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x35ca78: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x35ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ca7c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x35ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35ca80: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x35ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35ca84: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35ca84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x35ca88: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35ca88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x35ca8c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x35ca8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x35ca90: 0x46010044  c1          0x10044
    ctx->pc = 0x35ca90u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x35ca94: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x35ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x35ca98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35ca98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ca9c: 0x0  nop
    ctx->pc = 0x35ca9cu;
    // NOP
    // 0x35caa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35caa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35caa4: 0x0  nop
    ctx->pc = 0x35caa4u;
    // NOP
    // 0x35caa8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x35CAA8u;
    {
        const bool branch_taken_0x35caa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAA8u;
        // 0x35caac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35caa8) {
            ctx->pc = 0x35CAB4u;
            goto label_35cab4;
        }
    }
    ctx->pc = 0x35CAB0u;
    // 0x35cab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35cab4:
    // 0x35cab4: 0xa2620620  sb          $v0, 0x620($s3)
    ctx->pc = 0x35cab4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1568), (uint8_t)GPR_U32(ctx, 2));
    // 0x35cab8: 0x8fa60380  lw          $a2, 0x380($sp)
    ctx->pc = 0x35cab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x35cabc: 0x52a6000b  beql        $s5, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x35CABCu;
    {
        const bool branch_taken_0x35cabc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 6));
        if (branch_taken_0x35cabc) {
            ctx->pc = 0x35CAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CABCu;
            // 0x35cac0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CAECu;
            goto label_35caec;
        }
    }
    ctx->pc = 0x35CAC4u;
    // 0x35cac4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x35cac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cac8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x35cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x35cacc: 0x0  nop
    ctx->pc = 0x35caccu;
    // NOP
label_35cad0:
    // 0x35cad0: 0x0  nop
    ctx->pc = 0x35cad0u;
    // NOP
    // 0x35cad4: 0x0  nop
    ctx->pc = 0x35cad4u;
    // NOP
    // 0x35cad8: 0x0  nop
    ctx->pc = 0x35cad8u;
    // NOP
    // 0x35cadc: 0x0  nop
    ctx->pc = 0x35cadcu;
    // NOP
    // 0x35cae0: 0x1446fffb  bne         $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35CAE0u;
    {
        const bool branch_taken_0x35cae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x35CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAE0u;
        // 0x35cae4: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cae0) {
            ctx->pc = 0x35CAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cad0;
        }
    }
    ctx->pc = 0x35CAE8u;
    // 0x35cae8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35cae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35caec:
    // 0x35caec: 0x13a60009  beq         $sp, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x35CAECu;
    {
        const bool branch_taken_0x35caec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 6));
        ctx->pc = 0x35CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAECu;
        // 0x35caf0: 0xdfb00390  ld          $s0, 0x390($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35caec) {
            ctx->pc = 0x35CB14u;
            goto label_35cb14;
        }
    }
    ctx->pc = 0x35CAF4u;
    // 0x35caf4: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x35caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_35caf8:
    // 0x35caf8: 0x0  nop
    ctx->pc = 0x35caf8u;
    // NOP
    // 0x35cafc: 0x0  nop
    ctx->pc = 0x35cafcu;
    // NOP
    // 0x35cb00: 0x0  nop
    ctx->pc = 0x35cb00u;
    // NOP
    // 0x35cb04: 0x0  nop
    ctx->pc = 0x35cb04u;
    // NOP
    // 0x35cb08: 0x57a6fffb  bnel        $sp, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35CB08u;
    {
        const bool branch_taken_0x35cb08 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 6));
        if (branch_taken_0x35cb08) {
            ctx->pc = 0x35CB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CB08u;
            // 0x35cb0c: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35caf8;
        }
    }
    ctx->pc = 0x35CB10u;
label_35cb10:
    // 0x35cb10: 0xdfb00390  ld          $s0, 0x390($sp)
    ctx->pc = 0x35cb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 912)));
label_35cb14:
    // 0x35cb14: 0xdfb10398  ld          $s1, 0x398($sp)
    ctx->pc = 0x35cb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 920)));
    // 0x35cb18: 0xdfb203a0  ld          $s2, 0x3A0($sp)
    ctx->pc = 0x35cb18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x35cb1c: 0xdfb303a8  ld          $s3, 0x3A8($sp)
    ctx->pc = 0x35cb1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 936)));
    // 0x35cb20: 0xdfb403b0  ld          $s4, 0x3B0($sp)
    ctx->pc = 0x35cb20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x35cb24: 0xdfb503b8  ld          $s5, 0x3B8($sp)
    ctx->pc = 0x35cb24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x35cb28: 0xdfb603c0  ld          $s6, 0x3C0($sp)
    ctx->pc = 0x35cb28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x35cb2c: 0xdfb703c8  ld          $s7, 0x3C8($sp)
    ctx->pc = 0x35cb2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 968)));
    // 0x35cb30: 0xdfbe03d0  ld          $fp, 0x3D0($sp)
    ctx->pc = 0x35cb30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x35cb34: 0xdfbf03d8  ld          $ra, 0x3D8($sp)
    ctx->pc = 0x35cb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 984)));
    // 0x35cb38: 0xc7b80400  lwc1        $f24, 0x400($sp)
    ctx->pc = 0x35cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x35cb3c: 0xc7b703f8  lwc1        $f23, 0x3F8($sp)
    ctx->pc = 0x35cb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x35cb40: 0xc7b603f0  lwc1        $f22, 0x3F0($sp)
    ctx->pc = 0x35cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x35cb44: 0xc7b503e8  lwc1        $f21, 0x3E8($sp)
    ctx->pc = 0x35cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35cb48: 0xc7b403e0  lwc1        $f20, 0x3E0($sp)
    ctx->pc = 0x35cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB4Cu;
        // 0x35cb50: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CB54u;
    // 0x35cb54: 0x0  nop
    ctx->pc = 0x35cb54u;
    // NOP
    ctx->pc = 0x35cb58u;
}
