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

// Function: sub_001B0640
// Address: 0x1b0640 - 0x1b09a0
void sub_001B0640_0x1b0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0640_0x1b0640");
#endif

    switch (ctx->pc) {
        case 0x1b0688u: goto label_1b0688;
        case 0x1b06bcu: goto label_1b06bc;
        case 0x1b07b4u: goto label_1b07b4;
        case 0x1b07dcu: goto label_1b07dc;
        case 0x1b0804u: goto label_1b0804;
        case 0x1b08c4u: goto label_1b08c4;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b08f0u: goto label_1b08f0;
        case 0x1b0914u: goto label_1b0914;
        default: break;
    }

    ctx->pc = 0x1b0640u;

    // 0x1b0640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b0640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b0644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0648: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b064c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b064cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0658: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b065c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b0660: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b0664: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b0668: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b0668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b066c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1b066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b0670: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1b0670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1b0674: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b0674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b0678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0678u;
    {
        const bool branch_taken_0x1b0678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0678u;
        // 0x1b067c: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0678) {
            ctx->pc = 0x1B0688u;
            goto label_1b0688;
        }
    }
    ctx->pc = 0x1B0680u;
    // 0x1b0680: 0xc06c450  jal         func_1B1140
    ctx->pc = 0x1B0680u;
    SET_GPR_U32(ctx, 31, 0x1B0688u);
    ctx->pc = 0x1B0684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0680u;
    // 0x1b0684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1140u, 0x1B0680u, 0x1B0688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0688u;
label_1b0688:
    // 0x1b0688: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x1b0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1b068c: 0x144000b8  bnez        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1B068Cu;
    {
        const bool branch_taken_0x1b068c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B068Cu;
        // 0x1b0690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b068c) {
            ctx->pc = 0x1B0970u;
            goto label_1b0970;
        }
    }
    ctx->pc = 0x1B0694u;
    // 0x1b0694: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1b0694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b0698: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b069c: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1B069Cu;
    {
        const bool branch_taken_0x1b069c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B069Cu;
        // 0x1b06a0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b069c) {
            ctx->pc = 0x1B07F4u;
            goto label_1b07f4;
        }
    }
    ctx->pc = 0x1B06A4u;
    // 0x1b06a4: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1B06A4u;
    {
        const bool branch_taken_0x1b06a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06A4u;
        // 0x1b06a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06a4) {
            ctx->pc = 0x1B07F4u;
            goto label_1b07f4;
        }
    }
    ctx->pc = 0x1B06ACu;
    // 0x1b06ac: 0x106200b0  beq         $v1, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1B06ACu;
    {
        const bool branch_taken_0x1b06ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06ACu;
        // 0x1b06b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06ac) {
            ctx->pc = 0x1B0970u;
            goto label_1b0970;
        }
    }
    ctx->pc = 0x1B06B4u;
    // 0x1b06b4: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1B06B4u;
    SET_GPR_U32(ctx, 31, 0x1B06BCu);
    ctx->pc = 0x1B06B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06B4u;
    // 0x1b06b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1B06B4u, 0x1B06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06BCu;
label_1b06bc:
    // 0x1b06bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b06c0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1b06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b06c4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x1b06c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x1b06c8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x1b06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1b06cc: 0x8cb20028  lw          $s2, 0x28($a1)
    ctx->pc = 0x1b06ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1b06d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b06d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06d4: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b06d8: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x1b06d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    // 0x1b06dc: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1b06dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b06e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b06e4: 0xc454b1d8  lwc1        $f20, -0x4E28($v0)
    ctx->pc = 0x1b06e4u;
    { uint32_t bits = FAST_READ32(0x45B1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b06e8: 0x2ce50006  sltiu       $a1, $a3, 0x6
    ctx->pc = 0x1b06e8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b06ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b06f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b06f4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B06F4u;
    {
        const bool branch_taken_0x1b06f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06F4u;
        // 0x1b06f8: 0x24660090  addiu       $a2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06f4) {
            ctx->pc = 0x1B072Cu;
            goto label_1b072c;
        }
    }
    ctx->pc = 0x1B06FCu;
    // 0x1b06fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b0700: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1b0700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1b0704: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x1b0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x1b0708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b070c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0710: 0x800008  jr          $a0
    ctx->pc = 0x1B0710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0718u: goto label_1b0718;
            case 0x1B0720u: goto label_1b0720;
            case 0x1B0728u: goto label_1b0728;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B0718u;
label_1b0718:
    // 0x1b0718: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0718u;
    {
        const bool branch_taken_0x1b0718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0718u;
        // 0x1b071c: 0xc4d40000  lwc1        $f20, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0718) {
            ctx->pc = 0x1B072Cu;
            goto label_1b072c;
        }
    }
    ctx->pc = 0x1B0720u;
label_1b0720:
    // 0x1b0720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0720u;
    {
        const bool branch_taken_0x1b0720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0720u;
        // 0x1b0724: 0xc4d40004  lwc1        $f20, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0720) {
            ctx->pc = 0x1B072Cu;
            goto label_1b072c;
        }
    }
    ctx->pc = 0x1B0728u;
label_1b0728:
    // 0x1b0728: 0xc4d40008  lwc1        $f20, 0x8($a2)
    ctx->pc = 0x1b0728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b072c:
    // 0x1b072c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x1b072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1b0730: 0x3aa60002  xori        $a2, $s5, 0x2
    ctx->pc = 0x1b0730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)2);
    // 0x1b0734: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b0734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b0738: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b0738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b073c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b073cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0740: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1b0740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
    // 0x1b0744: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b0744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b0748: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b0748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b074c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1b074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b0750: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b0750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0754: 0x66100a  movz        $v0, $v1, $a2
    ctx->pc = 0x1b0754u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1b0758: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b075c: 0x14e50004  bne         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B075Cu;
    {
        const bool branch_taken_0x1b075c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B075Cu;
        // 0x1b0760: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b075c) {
            ctx->pc = 0x1B0770u;
            goto label_1b0770;
        }
    }
    ctx->pc = 0x1B0764u;
    // 0x1b0764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0768: 0x5202000c  beql        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0768u;
    {
        const bool branch_taken_0x1b0768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b0768) {
            ctx->pc = 0x1B076Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0768u;
            // 0x1b076c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B079Cu;
            goto label_1b079c;
        }
    }
    ctx->pc = 0x1B0770u;
label_1b0770:
    // 0x1b0770: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b0770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0774: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0774u;
    {
        const bool branch_taken_0x1b0774 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0774u;
        // 0x1b0778: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0774) {
            ctx->pc = 0x1B0788u;
            goto label_1b0788;
        }
    }
    ctx->pc = 0x1B077Cu;
    // 0x1b077c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0780: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0780u;
    {
        const bool branch_taken_0x1b0780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0780u;
        // 0x1b0784: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0780) {
            ctx->pc = 0x1B0798u;
            goto label_1b0798;
        }
    }
    ctx->pc = 0x1B0788u;
label_1b0788:
    // 0x1b0788: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0788u;
    {
        const bool branch_taken_0x1b0788 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0788u;
        // 0x1b078c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0788) {
            ctx->pc = 0x1B079Cu;
            goto label_1b079c;
        }
    }
    ctx->pc = 0x1B0790u;
    // 0x1b0790: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0790u;
    {
        const bool branch_taken_0x1b0790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0790) {
            ctx->pc = 0x1B079Cu;
            goto label_1b079c;
        }
    }
    ctx->pc = 0x1B0798u;
label_1b0798:
    // 0x1b0798: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b0798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b079c:
    // 0x1b079c: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B079Cu;
    {
        const bool branch_taken_0x1b079c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B079Cu;
        // 0x1b07a0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b079c) {
            ctx->pc = 0x1B07ECu;
            goto label_1b07ec;
        }
    }
    ctx->pc = 0x1B07A4u;
    // 0x1b07a4: 0x16600011  bnez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B07A4u;
    {
        const bool branch_taken_0x1b07a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b07a4) {
            ctx->pc = 0x1B07ECu;
            goto label_1b07ec;
        }
    }
    ctx->pc = 0x1B07ACu;
    // 0x1b07ac: 0xc06c268  jal         func_1B09A0
    ctx->pc = 0x1B07ACu;
    SET_GPR_U32(ctx, 31, 0x1B07B4u);
    ctx->pc = 0x1B07B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07ACu;
    // 0x1b07b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B09A0u, 0x1B07ACu, 0x1B07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07B4u;
label_1b07b4:
    // 0x1b07b4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B07B4u;
    {
        const bool branch_taken_0x1b07b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07B4u;
        // 0x1b07b8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07b4) {
            ctx->pc = 0x1B07ECu;
            goto label_1b07ec;
        }
    }
    ctx->pc = 0x1B07BCu;
    // 0x1b07bc: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1b07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b07c0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1b07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b07c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b07c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b07c8: 0x0  nop
    ctx->pc = 0x1b07c8u;
    // NOP
    // 0x1b07cc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B07CCu;
    {
        const bool branch_taken_0x1b07cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07CCu;
        // 0x1b07d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07cc) {
            ctx->pc = 0x1B07F4u;
            goto label_1b07f4;
        }
    }
    ctx->pc = 0x1B07D4u;
    // 0x1b07d4: 0xc06c450  jal         func_1B1140
    ctx->pc = 0x1B07D4u;
    SET_GPR_U32(ctx, 31, 0x1B07DCu);
    ctx->pc = 0x1B07D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07D4u;
    // 0x1b07d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1140u, 0x1B07D4u, 0x1B07DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07DCu;
label_1b07dc:
    // 0x1b07dc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b07dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b07e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b07e4: 0x54800a  movz        $s0, $v0, $s4
    ctx->pc = 0x1b07e4u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1b07e8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b07ec:
    // 0x1b07ec: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B07ECu;
    {
        const bool branch_taken_0x1b07ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b07ec) {
            ctx->pc = 0x1B07F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B07ECu;
            // 0x1b07f0: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B07FCu;
            goto label_1b07fc;
        }
    }
    ctx->pc = 0x1B07F4u;
label_1b07f4:
    // 0x1b07f4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1B07F4u;
    {
        const bool branch_taken_0x1b07f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07F4u;
        // 0x1b07f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07f4) {
            ctx->pc = 0x1B0970u;
            goto label_1b0970;
        }
    }
    ctx->pc = 0x1B07FCu;
label_1b07fc:
    // 0x1b07fc: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1B07FCu;
    SET_GPR_U32(ctx, 31, 0x1B0804u);
    ctx->pc = 0x1B0800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07FCu;
    // 0x1b0800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1B07FCu, 0x1B0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0804u;
label_1b0804:
    // 0x1b0804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b080c: 0x10a20043  beq         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B080Cu;
    {
        const bool branch_taken_0x1b080c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B080Cu;
        // 0x1b0810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b080c) {
            ctx->pc = 0x1B091Cu;
            goto label_1b091c;
        }
    }
    ctx->pc = 0x1B0814u;
    // 0x1b0814: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x1b0814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1b0818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b081c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b0820: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1b0820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b0824: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B0824u;
    {
        const bool branch_taken_0x1b0824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0824u;
        // 0x1b0828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0824) {
            ctx->pc = 0x1B089Cu;
            goto label_1b089c;
        }
    }
    ctx->pc = 0x1B082Cu;
    // 0x1b082c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b082cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b0830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b0830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0834: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x1b0834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x1b0838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b083c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0840: 0x800008  jr          $a0
    ctx->pc = 0x1B0840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0848u: goto label_1b0848;
            case 0x1B0858u: goto label_1b0858;
            case 0x1B0864u: goto label_1b0864;
            case 0x1B0874u: goto label_1b0874;
            case 0x1B0880u: goto label_1b0880;
            case 0x1B0890u: goto label_1b0890;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B0848u;
label_1b0848:
    // 0x1b0848: 0x24a60065  addiu       $a2, $a1, 0x65
    ctx->pc = 0x1b0848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 101));
    // 0x1b084c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b0850: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0850u;
    {
        const bool branch_taken_0x1b0850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0850u;
        // 0x1b0854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0850) {
            ctx->pc = 0x1B089Cu;
            goto label_1b089c;
        }
    }
    ctx->pc = 0x1B0858u;
label_1b0858:
    // 0x1b0858: 0x24a6006f  addiu       $a2, $a1, 0x6F
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 111));
    // 0x1b085c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B085Cu;
    {
        const bool branch_taken_0x1b085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B085Cu;
        // 0x1b0860: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b085c) {
            ctx->pc = 0x1B0898u;
            goto label_1b0898;
        }
    }
    ctx->pc = 0x1B0864u;
label_1b0864:
    // 0x1b0864: 0x24a60079  addiu       $a2, $a1, 0x79
    ctx->pc = 0x1b0864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 121));
    // 0x1b0868: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1b0868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b086c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B086Cu;
    {
        const bool branch_taken_0x1b086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B086Cu;
        // 0x1b0870: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b086c) {
            ctx->pc = 0x1B089Cu;
            goto label_1b089c;
        }
    }
    ctx->pc = 0x1B0874u;
label_1b0874:
    // 0x1b0874: 0x24a60083  addiu       $a2, $a1, 0x83
    ctx->pc = 0x1b0874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 131));
    // 0x1b0878: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0878u;
    {
        const bool branch_taken_0x1b0878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0878u;
        // 0x1b087c: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0878) {
            ctx->pc = 0x1B0898u;
            goto label_1b0898;
        }
    }
    ctx->pc = 0x1B0880u;
label_1b0880:
    // 0x1b0880: 0x24a6008d  addiu       $a2, $a1, 0x8D
    ctx->pc = 0x1b0880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 141));
    // 0x1b0884: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1b0884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b0888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0888u;
    {
        const bool branch_taken_0x1b0888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0888u;
        // 0x1b088c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0888) {
            ctx->pc = 0x1B089Cu;
            goto label_1b089c;
        }
    }
    ctx->pc = 0x1B0890u;
label_1b0890:
    // 0x1b0890: 0x24a60097  addiu       $a2, $a1, 0x97
    ctx->pc = 0x1b0890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 151));
    // 0x1b0894: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1b0894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b0898:
    // 0x1b0898: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b0898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b089c:
    // 0x1b089c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1B089Cu;
    {
        const bool branch_taken_0x1b089c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B089Cu;
        // 0x1b08a0: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b089c) {
            ctx->pc = 0x1B08CCu;
            goto label_1b08cc;
        }
    }
    ctx->pc = 0x1B08A4u;
    // 0x1b08a4: 0x26c24dd0  addiu       $v0, $s6, 0x4DD0
    ctx->pc = 0x1b08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19920));
    // 0x1b08a8: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1b08a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b08ac: 0xae2600f0  sw          $a2, 0xF0($s1)
    ctx->pc = 0x1b08acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 6));
    // 0x1b08b0: 0x2605fffa  addiu       $a1, $s0, -0x6
    ctx->pc = 0x1b08b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x1b08b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1b08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1b08b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b08bc: 0xc0f7364  jal         func_3DCD90
    ctx->pc = 0x1B08BCu;
    SET_GPR_U32(ctx, 31, 0x1B08C4u);
    ctx->pc = 0x1B08C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08BCu;
    // 0x1b08c0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD90u, 0x1B08BCu, 0x1B08C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08C4u;
label_1b08c4:
    // 0x1b08c4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B08C4u;
    {
        const bool branch_taken_0x1b08c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08C4u;
        // 0x1b08c8: 0xe62000f4  swc1        $f0, 0xF4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08c4) {
            ctx->pc = 0x1B091Cu;
            goto label_1b091c;
        }
    }
    ctx->pc = 0x1B08CCu;
label_1b08cc:
    // 0x1b08cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b08d0: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1B08D0u;
    SET_GPR_U32(ctx, 31, 0x1B08D8u);
    ctx->pc = 0x1B08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08D0u;
    // 0x1b08d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1B08D0u, 0x1B08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08D8u;
label_1b08d8:
    // 0x1b08d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b08dc: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B08DCu;
    {
        const bool branch_taken_0x1b08dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08DCu;
        // 0x1b08e0: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08dc) {
            ctx->pc = 0x1B08F8u;
            goto label_1b08f8;
        }
    }
    ctx->pc = 0x1B08E4u;
    // 0x1b08e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b08e8: 0xc06bfc8  jal         func_1AFF20
    ctx->pc = 0x1B08E8u;
    SET_GPR_U32(ctx, 31, 0x1B08F0u);
    ctx->pc = 0x1B08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08E8u;
    // 0x1b08ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x1B08E8u, 0x1B08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08F0u;
label_1b08f0:
    // 0x1b08f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B08F0u;
    {
        const bool branch_taken_0x1b08f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08F0u;
        // 0x1b08f4: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08f0) {
            ctx->pc = 0x1B091Cu;
            goto label_1b091c;
        }
    }
    ctx->pc = 0x1B08F8u;
label_1b08f8:
    // 0x1b08f8: 0x26c24dd0  addiu       $v0, $s6, 0x4DD0
    ctx->pc = 0x1b08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19920));
    // 0x1b08fc: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1b08fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b0900: 0x2605fffa  addiu       $a1, $s0, -0x6
    ctx->pc = 0x1b0900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x1b0904: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1b0904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1b0908: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b0908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b090c: 0xc0f7364  jal         func_3DCD90
    ctx->pc = 0x1B090Cu;
    SET_GPR_U32(ctx, 31, 0x1B0914u);
    ctx->pc = 0x1B0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B090Cu;
    // 0x1b0910: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD90u, 0x1B090Cu, 0x1B0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0914u;
label_1b0914:
    // 0x1b0914: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x1b0914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    // 0x1b0918: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x1b0918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_1b091c:
    // 0x1b091c: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1b091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1b0920: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b0920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0924: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0924u;
    {
        const bool branch_taken_0x1b0924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0924) {
            ctx->pc = 0x1B0928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0924u;
            // 0x1b0928: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B092Cu;
            goto label_1b092c;
        }
    }
    ctx->pc = 0x1B092Cu;
label_1b092c:
    // 0x1b092c: 0x262600bc  addiu       $a2, $s1, 0xBC
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    // 0x1b0930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b0934: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0938: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1b0938u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b093c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0940: 0x2010  mfhi        $a0
    ctx->pc = 0x1b0940u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1b0944: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b0944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b0948: 0xae2400c8  sw          $a0, 0xC8($s1)
    ctx->pc = 0x1b0948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 4));
    // 0x1b094c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1b094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b0950: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x1b0950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x1b0954: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x1b0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1b0958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b095c: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1b095cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0960: 0x2010  mfhi        $a0
    ctx->pc = 0x1b0960u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1b0964: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b0964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b0968: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1b0968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b096c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b096cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1b0970:
    // 0x1b0970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0978: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b097c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b097cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0980: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b0980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0984: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b0984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0988: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b0988u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b098c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b0990: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b0990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0994: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0994u;
        // 0x1b0998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B099Cu;
    // 0x1b099c: 0x0  nop
    ctx->pc = 0x1b099cu;
    // NOP
    ctx->pc = 0x1b09a0u;
}
