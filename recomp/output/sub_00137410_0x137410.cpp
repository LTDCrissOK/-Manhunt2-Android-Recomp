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

// Function: sub_00137410
// Address: 0x137410 - 0x137570
void sub_00137410_0x137410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137410_0x137410");
#endif

    switch (ctx->pc) {
        case 0x13744cu: goto label_13744c;
        case 0x137494u: goto label_137494;
        case 0x1374a4u: goto label_1374a4;
        case 0x1374c4u: goto label_1374c4;
        case 0x1374e0u: goto label_1374e0;
        case 0x1374fcu: goto label_1374fc;
        case 0x13750cu: goto label_13750c;
        default: break;
    }

    ctx->pc = 0x137410u;

    // 0x137410: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x137410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x137414: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x137414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x137418: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x137418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x13741c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13741cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137420: 0x30b700ff  andi        $s7, $a1, 0xFF
    ctx->pc = 0x137420u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x137424: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x137424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x137428: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x137428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x13742c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x13742cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x137430: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x137430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x137434: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x137434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x137438: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x137438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x13743c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x13743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x137440: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x137440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x137444: 0xc04da4a  jal         func_136928
    ctx->pc = 0x137444u;
    SET_GPR_U32(ctx, 31, 0x13744Cu);
    ctx->pc = 0x137448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137444u;
    // 0x137448: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136928u, 0x137444u, 0x13744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13744Cu;
label_13744c:
    // 0x13744c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13744cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137450: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x137450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x137454: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x137454u;
    {
        const bool branch_taken_0x137454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137454u;
        // 0x137458: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137454) {
            ctx->pc = 0x137538u;
            goto label_137538;
        }
    }
    ctx->pc = 0x13745Cu;
    // 0x13745c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x137460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137468: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x137468u;
    {
        const bool branch_taken_0x137468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137468u;
        // 0x13746c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137468) {
            ctx->pc = 0x13753Cu;
            goto label_13753c;
        }
    }
    ctx->pc = 0x137470u;
    // 0x137470: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x137470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x137474: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137478: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x137478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13747c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137480: 0x8c550108  lw          $s5, 0x108($v0)
    ctx->pc = 0x137480u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x137484: 0x56a00009  bnel        $s5, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x137484u;
    {
        const bool branch_taken_0x137484 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x137484) {
            ctx->pc = 0x137488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137484u;
            // 0x137488: 0x8e420464  lw          $v0, 0x464($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1374ACu;
            goto label_1374ac;
        }
    }
    ctx->pc = 0x13748Cu;
    // 0x13748c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x13748Cu;
    {
        const bool branch_taken_0x13748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13748Cu;
        // 0x137490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13748c) {
            ctx->pc = 0x13753Cu;
            goto label_13753c;
        }
    }
    ctx->pc = 0x137494u;
label_137494:
    // 0x137494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137498: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x137498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13749c: 0xc04da38  jal         func_1368E0
    ctx->pc = 0x13749Cu;
    SET_GPR_U32(ctx, 31, 0x1374A4u);
    ctx->pc = 0x1374A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13749Cu;
    // 0x1374a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1368E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368E0u, 0x13749Cu, 0x1374A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1374A4u;
label_1374a4:
    // 0x1374a4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1374A4u;
    {
        const bool branch_taken_0x1374a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374A4u;
        // 0x1374a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374a4) {
            ctx->pc = 0x13753Cu;
            goto label_13753c;
        }
    }
    ctx->pc = 0x1374ACu;
label_1374ac:
    // 0x1374ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1374acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1374b0: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1374b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1374b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1374b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374b8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1374b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1374bc: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x1374BCu;
    SET_GPR_U32(ctx, 31, 0x1374C4u);
    ctx->pc = 0x1374C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1374BCu;
    // 0x1374c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x1374BCu, 0x1374C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1374C4u;
label_1374c4:
    // 0x1374c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1374c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374c8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1374cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1374ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1374d0: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1374D0u;
    {
        const bool branch_taken_0x1374d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374D0u;
        // 0x1374d4: 0x905e041c  lbu         $fp, 0x41C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374d0) {
            ctx->pc = 0x137538u;
            goto label_137538;
        }
    }
    ctx->pc = 0x1374D8u;
    // 0x1374d8: 0x24130064  addiu       $s3, $zero, 0x64
    ctx->pc = 0x1374d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1374dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1374dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1374e0:
    // 0x1374e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1374e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374e4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1374e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1374e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1374e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374ec: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1374ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1374f0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1374f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374f4: 0xc04e0dc  jal         func_138370
    ctx->pc = 0x1374F4u;
    SET_GPR_U32(ctx, 31, 0x1374FCu);
    ctx->pc = 0x1374F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1374F4u;
    // 0x1374f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138370u, 0x1374F4u, 0x1374FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1374FCu;
label_1374fc:
    // 0x1374fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1374FCu;
    {
        const bool branch_taken_0x1374fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374FCu;
        // 0x137500: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374fc) {
            ctx->pc = 0x137528u;
            goto label_137528;
        }
    }
    ctx->pc = 0x137504u;
    // 0x137504: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x137504u;
    SET_GPR_U32(ctx, 31, 0x13750Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x137504u, 0x13750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13750Cu;
label_13750c:
    // 0x13750c: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x13750cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x137510: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137510u;
    {
        const bool branch_taken_0x137510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x137510) {
            ctx->pc = 0x137514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137510u;
            // 0x137514: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x137518u;
            goto label_137518;
        }
    }
    ctx->pc = 0x137518u;
label_137518:
    // 0x137518: 0x1810  mfhi        $v1
    ctx->pc = 0x137518u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13751c: 0x7e182b  sltu        $v1, $v1, $fp
    ctx->pc = 0x13751cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x137520: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x137520u;
    {
        const bool branch_taken_0x137520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137520u;
        // 0x137524: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137520) {
            ctx->pc = 0x137494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137494;
        }
    }
    ctx->pc = 0x137528u;
label_137528:
    // 0x137528: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x137528u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13752c: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x13752cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x137530: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x137530u;
    {
        const bool branch_taken_0x137530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137530u;
        // 0x137534: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137530) {
            ctx->pc = 0x1374E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1374e0;
        }
    }
    ctx->pc = 0x137538u;
label_137538:
    // 0x137538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13753c:
    // 0x13753c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x13753cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137540: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x137540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x137544: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x137544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x137548: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x137548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13754c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x13754cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x137550: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x137550u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137554: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x137554u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x137558: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x137558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13755c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x13755cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x137560: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x137560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x137564: 0x3e00008  jr          $ra
    ctx->pc = 0x137564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137564u;
        // 0x137568: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13756Cu;
    // 0x13756c: 0x0  nop
    ctx->pc = 0x13756cu;
    // NOP
    ctx->pc = 0x137570u;
}
