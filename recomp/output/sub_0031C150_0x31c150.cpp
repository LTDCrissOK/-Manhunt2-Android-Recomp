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

// Function: sub_0031C150
// Address: 0x31c150 - 0x31c4b0
void sub_0031C150_0x31c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C150_0x31c150");
#endif

    switch (ctx->pc) {
        case 0x31c1a4u: goto label_31c1a4;
        case 0x31c1c0u: goto label_31c1c0;
        case 0x31c1ccu: goto label_31c1cc;
        case 0x31c1e0u: goto label_31c1e0;
        case 0x31c1f8u: goto label_31c1f8;
        case 0x31c20cu: goto label_31c20c;
        case 0x31c224u: goto label_31c224;
        case 0x31c238u: goto label_31c238;
        case 0x31c24cu: goto label_31c24c;
        case 0x31c260u: goto label_31c260;
        case 0x31c274u: goto label_31c274;
        case 0x31c288u: goto label_31c288;
        case 0x31c29cu: goto label_31c29c;
        case 0x31c2b0u: goto label_31c2b0;
        case 0x31c2c4u: goto label_31c2c4;
        case 0x31c2d8u: goto label_31c2d8;
        case 0x31c2ecu: goto label_31c2ec;
        case 0x31c300u: goto label_31c300;
        case 0x31c314u: goto label_31c314;
        case 0x31c328u: goto label_31c328;
        case 0x31c340u: goto label_31c340;
        case 0x31c354u: goto label_31c354;
        case 0x31c36cu: goto label_31c36c;
        case 0x31c380u: goto label_31c380;
        case 0x31c398u: goto label_31c398;
        case 0x31c3acu: goto label_31c3ac;
        case 0x31c3c0u: goto label_31c3c0;
        case 0x31c3d4u: goto label_31c3d4;
        case 0x31c3ecu: goto label_31c3ec;
        case 0x31c400u: goto label_31c400;
        case 0x31c418u: goto label_31c418;
        case 0x31c430u: goto label_31c430;
        case 0x31c448u: goto label_31c448;
        case 0x31c45cu: goto label_31c45c;
        case 0x31c468u: goto label_31c468;
        case 0x31c47cu: goto label_31c47c;
        default: break;
    }

    ctx->pc = 0x31c150u;

    // 0x31c150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31c154: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x31c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x31c158: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x31c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x31c15c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31c15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31c160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c164: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x31c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x31c168: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x31c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x31c16c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c170: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x31c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x31c174: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31c178: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x31c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x31c17c: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x31c17cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x31c180: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x31c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x31c184: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x31c184u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x31c188: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x31c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x31c18c: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x31c18cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x31c190: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x31c190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x31c194: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x31c194u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x31c198: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x31c198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x31c19c: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31C19Cu;
    SET_GPR_U32(ctx, 31, 0x31C1A4u);
    ctx->pc = 0x31C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C19Cu;
    // 0x31c1a0: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31C19Cu, 0x31C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C1A4u;
label_31c1a4:
    // 0x31c1a4: 0x3c130047  lui         $s3, 0x47
    ctx->pc = 0x31c1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    // 0x31c1a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c1ac: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x31c1acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31c1b0: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x31c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x31c1b4: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x31c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x31c1b8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x31C1B8u;
    {
        const bool branch_taken_0x31c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1B8u;
        // 0x31c1bc: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1b8) {
            ctx->pc = 0x31C45Cu;
            goto label_31c45c;
        }
    }
    ctx->pc = 0x31C1C0u;
label_31c1c0:
    // 0x31c1c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c1c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C1C4u;
    SET_GPR_U32(ctx, 31, 0x31C1CCu);
    ctx->pc = 0x31C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C1C4u;
    // 0x31c1c8: 0x24453cf8  addiu       $a1, $v0, 0x3CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C1C4u, 0x31C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C1CCu;
label_31c1cc:
    // 0x31c1cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c1d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C1D0u;
    {
        const bool branch_taken_0x31c1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1D0u;
        // 0x31c1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1d0) {
            ctx->pc = 0x31C1E8u;
            goto label_31c1e8;
        }
    }
    ctx->pc = 0x31C1D8u;
    // 0x31c1d8: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C1D8u;
    SET_GPR_U32(ctx, 31, 0x31C1E0u);
    ctx->pc = 0x31C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C1D8u;
    // 0x31c1dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C1D8u, 0x31C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C1E0u;
label_31c1e0:
    // 0x31c1e0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x31C1E0u;
    {
        const bool branch_taken_0x31c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1E0u;
        // 0x31c1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1e0) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C1E8u;
label_31c1e8:
    // 0x31c1e8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c1ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c1f0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C1F0u;
    SET_GPR_U32(ctx, 31, 0x31C1F8u);
    ctx->pc = 0x31C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C1F0u;
    // 0x31c1f4: 0x24453d08  addiu       $a1, $v0, 0x3D08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C1F0u, 0x31C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C1F8u;
label_31c1f8:
    // 0x31c1f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C1FCu;
    {
        const bool branch_taken_0x31c1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1FCu;
        // 0x31c200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1fc) {
            ctx->pc = 0x31C214u;
            goto label_31c214;
        }
    }
    ctx->pc = 0x31C204u;
    // 0x31c204: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C204u;
    SET_GPR_U32(ctx, 31, 0x31C20Cu);
    ctx->pc = 0x31C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C204u;
    // 0x31c208: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C204u, 0x31C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C20Cu;
label_31c20c:
    // 0x31c20c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x31C20Cu;
    {
        const bool branch_taken_0x31c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C20Cu;
        // 0x31c210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c20c) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C214u;
label_31c214:
    // 0x31c214: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c21c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C21Cu;
    SET_GPR_U32(ctx, 31, 0x31C224u);
    ctx->pc = 0x31C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C21Cu;
    // 0x31c220: 0x24453d18  addiu       $a1, $v0, 0x3D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C21Cu, 0x31C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C224u;
label_31c224:
    // 0x31c224: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C228u;
    {
        const bool branch_taken_0x31c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C228u;
        // 0x31c22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c228) {
            ctx->pc = 0x31C240u;
            goto label_31c240;
        }
    }
    ctx->pc = 0x31C230u;
    // 0x31c230: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C230u;
    SET_GPR_U32(ctx, 31, 0x31C238u);
    ctx->pc = 0x31C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C230u;
    // 0x31c234: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C230u, 0x31C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C238u;
label_31c238:
    // 0x31c238: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x31C238u;
    {
        const bool branch_taken_0x31c238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C238u;
        // 0x31c23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c238) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C240u;
label_31c240:
    // 0x31c240: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c244: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C244u;
    SET_GPR_U32(ctx, 31, 0x31C24Cu);
    ctx->pc = 0x31C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C244u;
    // 0x31c248: 0x27c53d28  addiu       $a1, $fp, 0x3D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 15656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C244u, 0x31C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C24Cu;
label_31c24c:
    // 0x31c24c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C250u;
    {
        const bool branch_taken_0x31c250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C250u;
        // 0x31c254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c250) {
            ctx->pc = 0x31C268u;
            goto label_31c268;
        }
    }
    ctx->pc = 0x31C258u;
    // 0x31c258: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C258u;
    SET_GPR_U32(ctx, 31, 0x31C260u);
    ctx->pc = 0x31C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C258u;
    // 0x31c25c: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C258u, 0x31C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C260u;
label_31c260:
    // 0x31c260: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x31C260u;
    {
        const bool branch_taken_0x31c260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C260u;
        // 0x31c264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c260) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C268u;
label_31c268:
    // 0x31c268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c26c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C26Cu;
    SET_GPR_U32(ctx, 31, 0x31C274u);
    ctx->pc = 0x31C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C26Cu;
    // 0x31c270: 0x26c53d38  addiu       $a1, $s6, 0x3D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 15672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C26Cu, 0x31C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C274u;
label_31c274:
    // 0x31c274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C278u;
    {
        const bool branch_taken_0x31c278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C278u;
        // 0x31c27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c278) {
            ctx->pc = 0x31C290u;
            goto label_31c290;
        }
    }
    ctx->pc = 0x31C280u;
    // 0x31c280: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C280u;
    SET_GPR_U32(ctx, 31, 0x31C288u);
    ctx->pc = 0x31C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C280u;
    // 0x31c284: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C280u, 0x31C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C288u;
label_31c288:
    // 0x31c288: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x31C288u;
    {
        const bool branch_taken_0x31c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C288u;
        // 0x31c28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c288) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C290u;
label_31c290:
    // 0x31c290: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c294: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C294u;
    SET_GPR_U32(ctx, 31, 0x31C29Cu);
    ctx->pc = 0x31C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C294u;
    // 0x31c298: 0x26e53d48  addiu       $a1, $s7, 0x3D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 15688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C294u, 0x31C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C29Cu;
label_31c29c:
    // 0x31c29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c2a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C2A0u;
    {
        const bool branch_taken_0x31c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2A0u;
        // 0x31c2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2a0) {
            ctx->pc = 0x31C2B8u;
            goto label_31c2b8;
        }
    }
    ctx->pc = 0x31C2A8u;
    // 0x31c2a8: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C2A8u;
    SET_GPR_U32(ctx, 31, 0x31C2B0u);
    ctx->pc = 0x31C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2A8u;
    // 0x31c2ac: 0x26250014  addiu       $a1, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C2A8u, 0x31C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2B0u;
label_31c2b0:
    // 0x31c2b0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x31C2B0u;
    {
        const bool branch_taken_0x31c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2B0u;
        // 0x31c2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2b0) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C2B8u;
label_31c2b8:
    // 0x31c2b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C2BCu;
    SET_GPR_U32(ctx, 31, 0x31C2C4u);
    ctx->pc = 0x31C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2BCu;
    // 0x31c2c0: 0x26853d58  addiu       $a1, $s4, 0x3D58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 15704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C2BCu, 0x31C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2C4u;
label_31c2c4:
    // 0x31c2c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c2c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C2C8u;
    {
        const bool branch_taken_0x31c2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2C8u;
        // 0x31c2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2c8) {
            ctx->pc = 0x31C2E0u;
            goto label_31c2e0;
        }
    }
    ctx->pc = 0x31C2D0u;
    // 0x31c2d0: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C2D0u;
    SET_GPR_U32(ctx, 31, 0x31C2D8u);
    ctx->pc = 0x31C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2D0u;
    // 0x31c2d4: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C2D0u, 0x31C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2D8u;
label_31c2d8:
    // 0x31c2d8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x31C2D8u;
    {
        const bool branch_taken_0x31c2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2D8u;
        // 0x31c2dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2d8) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C2E0u;
label_31c2e0:
    // 0x31c2e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C2E4u;
    SET_GPR_U32(ctx, 31, 0x31C2ECu);
    ctx->pc = 0x31C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2E4u;
    // 0x31c2e8: 0x26a53d70  addiu       $a1, $s5, 0x3D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 15728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C2E4u, 0x31C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2ECu;
label_31c2ec:
    // 0x31c2ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c2f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C2F0u;
    {
        const bool branch_taken_0x31c2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2F0u;
        // 0x31c2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2f0) {
            ctx->pc = 0x31C308u;
            goto label_31c308;
        }
    }
    ctx->pc = 0x31C2F8u;
    // 0x31c2f8: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C2F8u;
    SET_GPR_U32(ctx, 31, 0x31C300u);
    ctx->pc = 0x31C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2F8u;
    // 0x31c2fc: 0x2625001c  addiu       $a1, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C2F8u, 0x31C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C300u;
label_31c300:
    // 0x31c300: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x31C300u;
    {
        const bool branch_taken_0x31c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C300u;
        // 0x31c304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c300) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C308u;
label_31c308:
    // 0x31c308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c30c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C30Cu;
    SET_GPR_U32(ctx, 31, 0x31C314u);
    ctx->pc = 0x31C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C30Cu;
    // 0x31c310: 0x26653d80  addiu       $a1, $s3, 0x3D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 15744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C30Cu, 0x31C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C314u;
label_31c314:
    // 0x31c314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C318u;
    {
        const bool branch_taken_0x31c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C318u;
        // 0x31c31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c318) {
            ctx->pc = 0x31C330u;
            goto label_31c330;
        }
    }
    ctx->pc = 0x31C320u;
    // 0x31c320: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C320u;
    SET_GPR_U32(ctx, 31, 0x31C328u);
    ctx->pc = 0x31C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C320u;
    // 0x31c324: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C320u, 0x31C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C328u;
label_31c328:
    // 0x31c328: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31C328u;
    {
        const bool branch_taken_0x31c328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C328u;
        // 0x31c32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c328) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C330u;
label_31c330:
    // 0x31c330: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c338: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C338u;
    SET_GPR_U32(ctx, 31, 0x31C340u);
    ctx->pc = 0x31C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C338u;
    // 0x31c33c: 0x24a53d90  addiu       $a1, $a1, 0x3D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C338u, 0x31C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C340u;
label_31c340:
    // 0x31c340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C344u;
    {
        const bool branch_taken_0x31c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C344u;
        // 0x31c348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c344) {
            ctx->pc = 0x31C35Cu;
            goto label_31c35c;
        }
    }
    ctx->pc = 0x31C34Cu;
    // 0x31c34c: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31C34Cu;
    SET_GPR_U32(ctx, 31, 0x31C354u);
    ctx->pc = 0x31C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C34Cu;
    // 0x31c350: 0x26250084  addiu       $a1, $s1, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31C34Cu, 0x31C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C354u;
label_31c354:
    // 0x31c354: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x31C354u;
    {
        const bool branch_taken_0x31c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C354u;
        // 0x31c358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c354) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C35Cu;
label_31c35c:
    // 0x31c35c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c360: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c364: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C364u;
    SET_GPR_U32(ctx, 31, 0x31C36Cu);
    ctx->pc = 0x31C368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C364u;
    // 0x31c368: 0x24a53da8  addiu       $a1, $a1, 0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C364u, 0x31C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C36Cu;
label_31c36c:
    // 0x31c36c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C370u;
    {
        const bool branch_taken_0x31c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C370u;
        // 0x31c374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c370) {
            ctx->pc = 0x31C388u;
            goto label_31c388;
        }
    }
    ctx->pc = 0x31C378u;
    // 0x31c378: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C378u;
    SET_GPR_U32(ctx, 31, 0x31C380u);
    ctx->pc = 0x31C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C378u;
    // 0x31c37c: 0x2625008c  addiu       $a1, $s1, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C378u, 0x31C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C380u;
label_31c380:
    // 0x31c380: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x31C380u;
    {
        const bool branch_taken_0x31c380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C380u;
        // 0x31c384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c380) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C388u;
label_31c388:
    // 0x31c388: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c38c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c390: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C390u;
    SET_GPR_U32(ctx, 31, 0x31C398u);
    ctx->pc = 0x31C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C390u;
    // 0x31c394: 0x24a53db8  addiu       $a1, $a1, 0x3DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C390u, 0x31C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C398u;
label_31c398:
    // 0x31c398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c39c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C39Cu;
    {
        const bool branch_taken_0x31c39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C39Cu;
        // 0x31c3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c39c) {
            ctx->pc = 0x31C3B4u;
            goto label_31c3b4;
        }
    }
    ctx->pc = 0x31C3A4u;
    // 0x31c3a4: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C3A4u;
    SET_GPR_U32(ctx, 31, 0x31C3ACu);
    ctx->pc = 0x31C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3A4u;
    // 0x31c3a8: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C3A4u, 0x31C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3ACu;
label_31c3ac:
    // 0x31c3ac: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x31C3ACu;
    {
        const bool branch_taken_0x31c3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3ACu;
        // 0x31c3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3ac) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C3B4u;
label_31c3b4:
    // 0x31c3b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31c3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3b8: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x31C3B8u;
    SET_GPR_U32(ctx, 31, 0x31C3C0u);
    ctx->pc = 0x31C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3B8u;
    // 0x31c3bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x31C3B8u, 0x31C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3C0u;
label_31c3c0:
    // 0x31c3c0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x31c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x31c3c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31c3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3c8: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x31c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    // 0x31c3cc: 0xc0ac6fe  jal         func_2B1BF8
    ctx->pc = 0x31C3CCu;
    SET_GPR_U32(ctx, 31, 0x31C3D4u);
    ctx->pc = 0x31C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3CCu;
    // 0x31c3d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1BF8u, 0x31C3CCu, 0x31C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3D4u;
label_31c3d4:
    // 0x31c3d4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x31C3D4u;
    {
        const bool branch_taken_0x31c3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3D4u;
        // 0x31c3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3d4) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C3DCu;
    // 0x31c3dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c3e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C3E4u;
    SET_GPR_U32(ctx, 31, 0x31C3ECu);
    ctx->pc = 0x31C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3E4u;
    // 0x31c3e8: 0x24a53dc0  addiu       $a1, $a1, 0x3DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C3E4u, 0x31C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C3ECu;
label_31c3ec:
    // 0x31c3ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c3f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C3F0u;
    {
        const bool branch_taken_0x31c3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3F0u;
        // 0x31c3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3f0) {
            ctx->pc = 0x31C408u;
            goto label_31c408;
        }
    }
    ctx->pc = 0x31C3F8u;
    // 0x31c3f8: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C3F8u;
    SET_GPR_U32(ctx, 31, 0x31C400u);
    ctx->pc = 0x31C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3F8u;
    // 0x31c3fc: 0x26250088  addiu       $a1, $s1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C3F8u, 0x31C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C400u;
label_31c400:
    // 0x31c400: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31C400u;
    {
        const bool branch_taken_0x31c400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C400u;
        // 0x31c404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c400) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C408u;
label_31c408:
    // 0x31c408: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c40c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c410: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C410u;
    SET_GPR_U32(ctx, 31, 0x31C418u);
    ctx->pc = 0x31C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C410u;
    // 0x31c414: 0x24a53dd8  addiu       $a1, $a1, 0x3DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C410u, 0x31C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C418u;
label_31c418:
    // 0x31c418: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c41c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C41Cu;
    {
        const bool branch_taken_0x31c41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C41Cu;
        // 0x31c420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c41c) {
            ctx->pc = 0x31C438u;
            goto label_31c438;
        }
    }
    ctx->pc = 0x31C424u;
    // 0x31c424: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31c424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31c428: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C428u;
    SET_GPR_U32(ctx, 31, 0x31C430u);
    ctx->pc = 0x31C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C428u;
    // 0x31c42c: 0x24a5b758  addiu       $a1, $a1, -0x48A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C428u, 0x31C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C430u;
label_31c430:
    // 0x31c430: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31C430u;
    {
        const bool branch_taken_0x31c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C430u;
        // 0x31c434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c430) {
            ctx->pc = 0x31C460u;
            goto label_31c460;
        }
    }
    ctx->pc = 0x31C438u;
label_31c438:
    // 0x31c438: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c440: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C440u;
    SET_GPR_U32(ctx, 31, 0x31C448u);
    ctx->pc = 0x31C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C440u;
    // 0x31c444: 0x24a53df8  addiu       $a1, $a1, 0x3DF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C440u, 0x31C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C448u;
label_31c448:
    // 0x31c448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c44c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C44Cu;
    {
        const bool branch_taken_0x31c44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C44Cu;
        // 0x31c450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c44c) {
            ctx->pc = 0x31C45Cu;
            goto label_31c45c;
        }
    }
    ctx->pc = 0x31C454u;
    // 0x31c454: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C454u;
    SET_GPR_U32(ctx, 31, 0x31C45Cu);
    ctx->pc = 0x31C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C454u;
    // 0x31c458: 0x262500a8  addiu       $a1, $s1, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C454u, 0x31C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C45Cu;
label_31c45c:
    // 0x31c45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c460:
    // 0x31c460: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31C460u;
    SET_GPR_U32(ctx, 31, 0x31C468u);
    ctx->pc = 0x31C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C460u;
    // 0x31c464: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31C460u, 0x31C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C468u;
label_31c468:
    // 0x31c468: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x31C468u;
    {
        const bool branch_taken_0x31c468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C468u;
        // 0x31c46c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c468) {
            ctx->pc = 0x31C1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c1c0;
        }
    }
    ctx->pc = 0x31C470u;
    // 0x31c470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c474: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31C474u;
    SET_GPR_U32(ctx, 31, 0x31C47Cu);
    ctx->pc = 0x31C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C474u;
    // 0x31c478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31C474u, 0x31C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C47Cu;
label_31c47c:
    // 0x31c47c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x31c47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c480: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x31c480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31c484: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x31c484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c488: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x31c488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31c48c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x31c48cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c490: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x31c490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31c494: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x31c494u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c498: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x31c498u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31c49c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x31c49cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c4a0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x31c4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31c4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4A4u;
        // 0x31c4a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C4ACu;
    // 0x31c4ac: 0x0  nop
    ctx->pc = 0x31c4acu;
    // NOP
    ctx->pc = 0x31c4b0u;
}
