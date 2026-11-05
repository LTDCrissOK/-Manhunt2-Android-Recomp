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

// Function: sub_002C9490
// Address: 0x2c9490 - 0x2c9d08
void sub_002C9490_0x2c9490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9490_0x2c9490");
#endif

    switch (ctx->pc) {
        case 0x2c9524u: goto label_2c9524;
        case 0x2c95d0u: goto label_2c95d0;
        case 0x2c9600u: goto label_2c9600;
        case 0x2c9620u: goto label_2c9620;
        case 0x2c9668u: goto label_2c9668;
        case 0x2c96e0u: goto label_2c96e0;
        case 0x2c9730u: goto label_2c9730;
        case 0x2c9760u: goto label_2c9760;
        case 0x2c9768u: goto label_2c9768;
        case 0x2c9820u: goto label_2c9820;
        case 0x2c98f8u: goto label_2c98f8;
        case 0x2c9934u: goto label_2c9934;
        case 0x2c9968u: goto label_2c9968;
        case 0x2c996cu: goto label_2c996c;
        case 0x2c99b4u: goto label_2c99b4;
        case 0x2c9a2cu: goto label_2c9a2c;
        case 0x2c9a7cu: goto label_2c9a7c;
        case 0x2c9aacu: goto label_2c9aac;
        case 0x2c9ab4u: goto label_2c9ab4;
        case 0x2c9b58u: goto label_2c9b58;
        case 0x2c9c60u: goto label_2c9c60;
        case 0x2c9c84u: goto label_2c9c84;
        case 0x2c9cccu: goto label_2c9ccc;
        case 0x2c9cd4u: goto label_2c9cd4;
        default: break;
    }

    ctx->pc = 0x2c9490u;

    // 0x2c9490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9494: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c9494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c949c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c94a0: 0x10a00214  beqz        $a1, . + 4 + (0x214 << 2)
    ctx->pc = 0x2C94A0u;
    {
        const bool branch_taken_0x2c94a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94A0u;
        // 0x2c94a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94a0) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C94A8u;
    // 0x2c94a8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c94ac: 0x24a8fff8  addiu       $t0, $a1, -0x8
    ctx->pc = 0x2c94acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x2c94b0: 0x24515b88  addiu       $s1, $v0, 0x5B88
    ctx->pc = 0x2c94b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23432));
    // 0x2c94b4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2c94b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c94b8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x2c94b8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x575B98u));
    // 0x2c94bc: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x2c94bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c94c0: 0x14400202  bnez        $v0, . + 4 + (0x202 << 2)
    ctx->pc = 0x2C94C0u;
    {
        const bool branch_taken_0x2c94c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c94c0) {
            ctx->pc = 0x2C9CCCu;
            goto label_2c9ccc;
        }
    }
    ctx->pc = 0x2C94C8u;
    // 0x2c94c8: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2c94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c94cc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2c94ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2c94d0: 0x104001fe  beqz        $v0, . + 4 + (0x1FE << 2)
    ctx->pc = 0x2C94D0u;
    {
        const bool branch_taken_0x2c94d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c94d0) {
            ctx->pc = 0x2C9CCCu;
            goto label_2c9ccc;
        }
    }
    ctx->pc = 0x2C94D8u;
    // 0x2c94d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c94dc: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x2c94dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c94e0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c94e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c94e4: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x2c94e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2c94e8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c94e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c94ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c94ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c94f0: 0x106000ad  beqz        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x2C94F0u;
    {
        const bool branch_taken_0x2c94f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C94F0u;
        // 0x2c94f4: 0x1104821  addu        $t1, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94f0) {
            ctx->pc = 0x2C97A8u;
            goto label_2c97a8;
        }
    }
    ctx->pc = 0x2C94F8u;
    // 0x2c94f8: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x2c94f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x2c94fc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c94fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c9500: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C9500u;
    {
        const bool branch_taken_0x2c9500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9500u;
        // 0x2c9504: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9500) {
            ctx->pc = 0x2C953Cu;
            goto label_2c953c;
        }
    }
    ctx->pc = 0x2C9508u;
    // 0x2c9508: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c9508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c950c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2c950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2c9510: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2c9510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2c9514: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2c9514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9518: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x2c9518u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2c951c: 0xc0b2820  jal         func_2CA080
    ctx->pc = 0x2C951Cu;
    SET_GPR_U32(ctx, 31, 0x2C9524u);
    ctx->pc = 0x2C9520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C951Cu;
    // 0x2c9520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA080u, 0x2C951Cu, 0x2C9524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9524u;
label_2c9524:
    // 0x2c9524: 0x544001f4  bnel        $v0, $zero, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x2C9524u;
    {
        const bool branch_taken_0x2c9524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9524) {
            ctx->pc = 0x2C9528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9524u;
            // 0x2c9528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CF8u;
            goto label_2c9cf8;
        }
    }
    ctx->pc = 0x2C952Cu;
    // 0x2c952c: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x2c952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x2c9530: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c9530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c9534: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x2C9534u;
    {
        const bool branch_taken_0x2c9534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9534u;
        // 0x2c9538: 0xae2201ac  sw          $v0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9534) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C953Cu;
label_2c953c:
    // 0x2c953c: 0x1045023  subu        $t2, $t0, $a0
    ctx->pc = 0x2c953cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2c9540: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2c9540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9544: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x2c9544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c9548: 0x144001e0  bnez        $v0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x2C9548u;
    {
        const bool branch_taken_0x2c9548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9548u;
        // 0x2c954c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9548) {
            ctx->pc = 0x2C9CCCu;
            goto label_2c9ccc;
        }
    }
    ctx->pc = 0x2C9550u;
    // 0x2c9550: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2c9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c9554: 0x11020084  beq         $t0, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2C9554u;
    {
        const bool branch_taken_0x2c9554 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9554u;
        // 0x2c9558: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9554) {
            ctx->pc = 0x2C9768u;
            goto label_2c9768;
        }
    }
    ctx->pc = 0x2C955Cu;
    // 0x2c955c: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x2c955cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c9560: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C9560u;
    {
        const bool branch_taken_0x2c9560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9560) {
            ctx->pc = 0x2C9564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9560u;
            // 0x2c9564: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C95D0u;
            goto label_2c95d0;
        }
    }
    ctx->pc = 0x2C9568u;
    // 0x2c9568: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c956c: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x2c956cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2c9570: 0x14c50008  bne         $a2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9570u;
    {
        const bool branch_taken_0x2c9570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9570u;
        // 0x2c9574: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9570) {
            ctx->pc = 0x2C9594u;
            goto label_2c9594;
        }
    }
    ctx->pc = 0x2C9578u;
    // 0x2c9578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c957c: 0x8d835b88  lw          $v1, 0x5B88($t4)
    ctx->pc = 0x2c957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 23432)));
    // 0x2c9580: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c9580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c9584: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c9584u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c9588: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c9588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c958c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2C958Cu;
    {
        const bool branch_taken_0x2c958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C958Cu;
        // 0x2c9590: 0xad835b88  sw          $v1, 0x5B88($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 23432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c958c) {
            ctx->pc = 0x2C97A8u;
            goto label_2c97a8;
        }
    }
    ctx->pc = 0x2C9594u;
label_2c9594:
    // 0x2c9594: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x2c9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2c9598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c9598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c959c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C959Cu;
    {
        const bool branch_taken_0x2c959c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C959Cu;
        // 0x2c95a0: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c959c) {
            ctx->pc = 0x2C95ACu;
            goto label_2c95ac;
        }
    }
    ctx->pc = 0x2C95A4u;
    // 0x2c95a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C95A4u;
    {
        const bool branch_taken_0x2c95a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c95a4) {
            ctx->pc = 0x2C95C8u;
            goto label_2c95c8;
        }
    }
    ctx->pc = 0x2C95ACu;
label_2c95ac:
    // 0x2c95ac: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C95ACu;
    {
        const bool branch_taken_0x2c95ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95ACu;
        // 0x2c95b0: 0xa7102b  sltu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95ac) {
            ctx->pc = 0x2C95BCu;
            goto label_2c95bc;
        }
    }
    ctx->pc = 0x2C95B4u;
    // 0x2c95b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C95B4u;
    {
        const bool branch_taken_0x2c95b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c95b4) {
            ctx->pc = 0x2C95C8u;
            goto label_2c95c8;
        }
    }
    ctx->pc = 0x2C95BCu;
label_2c95bc:
    // 0x2c95bc: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x2c95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x2c95c0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2C95C0u;
    {
        const bool branch_taken_0x2c95c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95C0u;
        // 0x2c95c4: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95c0) {
            ctx->pc = 0x2C97A8u;
            goto label_2c97a8;
        }
    }
    ctx->pc = 0x2C95C8u;
label_2c95c8:
    // 0x2c95c8: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C95C8u;
    SET_GPR_U32(ctx, 31, 0x2C95D0u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C95C8u, 0x2C95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95D0u;
label_2c95d0:
    // 0x2c95d0: 0x1048000b  beq         $v0, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C95D0u;
    {
        const bool branch_taken_0x2c95d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95D0u;
        // 0x2c95d4: 0x8d0b0018  lw          $t3, 0x18($t0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95d0) {
            ctx->pc = 0x2C9600u;
            goto label_2c9600;
        }
    }
    ctx->pc = 0x2C95D8u;
    // 0x2c95d8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2c95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c95dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c95dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95e0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2c95e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c95e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C95E4u;
    {
        const bool branch_taken_0x2c95e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c95e4) {
            ctx->pc = 0x2C95F8u;
            goto label_2c95f8;
        }
    }
    ctx->pc = 0x2C95ECu;
    // 0x2c95ec: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2c95ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2c95f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C95F0u;
    {
        const bool branch_taken_0x2c95f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95F0u;
        // 0x2c95f4: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95f0) {
            ctx->pc = 0x2C9668u;
            goto label_2c9668;
        }
    }
    ctx->pc = 0x2C95F8u;
label_2c95f8:
    // 0x2c95f8: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C95F8u;
    SET_GPR_U32(ctx, 31, 0x2C9600u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C95F8u, 0x2C9600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9600u;
label_2c9600:
    // 0x2c9600: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x2c9600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2c9604: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9604u;
    {
        const bool branch_taken_0x2c9604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9604u;
        // 0x2c9608: 0x25040014  addiu       $a0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9604) {
            ctx->pc = 0x2C9628u;
            goto label_2c9628;
        }
    }
    ctx->pc = 0x2C960Cu;
    // 0x2c960c: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x2c960cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2c9610: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C9610u;
    {
        const bool branch_taken_0x2c9610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9610u;
        // 0x2c9614: 0x25040010  addiu       $a0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9610) {
            ctx->pc = 0x2C9668u;
            goto label_2c9668;
        }
    }
    ctx->pc = 0x2C9618u;
    // 0x2c9618: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9618u;
    {
        const bool branch_taken_0x2c9618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9618u;
        // 0x2c961c: 0x8cc20014  lw          $v0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9618) {
            ctx->pc = 0x2C962Cu;
            goto label_2c962c;
        }
    }
    ctx->pc = 0x2C9620u;
label_2c9620:
    // 0x2c9620: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c9620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9624: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2c9624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9628:
    // 0x2c9628: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c9628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2c962c:
    // 0x2c962c: 0x0  nop
    ctx->pc = 0x2c962cu;
    // NOP
    // 0x2c9630: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9630u;
    {
        const bool branch_taken_0x2c9630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9630u;
        // 0x2c9634: 0x24c30014  addiu       $v1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9630) {
            ctx->pc = 0x2C9620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9620;
        }
    }
    ctx->pc = 0x2C9638u;
    // 0x2c9638: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2c9638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c963c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C963Cu;
    {
        const bool branch_taken_0x2c963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C963Cu;
        // 0x2c9640: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c963c) {
            ctx->pc = 0x2C9620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9620;
        }
    }
    ctx->pc = 0x2C9644u;
    // 0x2c9644: 0x25835b88  addiu       $v1, $t4, 0x5B88
    ctx->pc = 0x2c9644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
    // 0x2c9648: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c9648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c964c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c964cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9650: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9650u;
    {
        const bool branch_taken_0x2c9650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9650) {
            ctx->pc = 0x2C9660u;
            goto label_2c9660;
        }
    }
    ctx->pc = 0x2C9658u;
    // 0x2c9658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9658u;
    {
        const bool branch_taken_0x2c9658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9658u;
        // 0x2c965c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9658) {
            ctx->pc = 0x2C9668u;
            goto label_2c9668;
        }
    }
    ctx->pc = 0x2C9660u;
label_2c9660:
    // 0x2c9660: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9660u;
    SET_GPR_U32(ctx, 31, 0x2C9668u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9660u, 0x2C9668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9668u;
label_2c9668:
    // 0x2c9668: 0x1160004f  beqz        $t3, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C9668u;
    {
        const bool branch_taken_0x2c9668 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9668u;
        // 0x2c966c: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9668) {
            ctx->pc = 0x2C97A8u;
            goto label_2c97a8;
        }
    }
    ctx->pc = 0x2C9670u;
    // 0x2c9670: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x2c9670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x2c9674: 0x24655cb4  addiu       $a1, $v1, 0x5CB4
    ctx->pc = 0x2c9674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23732));
    // 0x2c9678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c967c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c9680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c9680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9684: 0x5543000c  bnel        $t2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9684u;
    {
        const bool branch_taken_0x2c9684 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9684) {
            ctx->pc = 0x2C9688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9684u;
            // 0x2c9688: 0x8ca2fee4  lw          $v0, -0x11C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C96B8u;
            goto label_2c96b8;
        }
    }
    ctx->pc = 0x2C968Cu;
    // 0x2c968c: 0x14c00016  bnez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C968Cu;
    {
        const bool branch_taken_0x2c968c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C968Cu;
        // 0x2c9690: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c968c) {
            ctx->pc = 0x2C96E8u;
            goto label_2c96e8;
        }
    }
    ctx->pc = 0x2C9694u;
    // 0x2c9694: 0x8d44001c  lw          $a0, 0x1C($t2)
    ctx->pc = 0x2c9694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x2c9698: 0x24a5fed4  addiu       $a1, $a1, -0x12C
    ctx->pc = 0x2c9698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966996));
    // 0x2c969c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c96a0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2c96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c96a4: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c96a8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c96a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c96ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c96acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c96b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C96B0u;
    {
        const bool branch_taken_0x2c96b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96B0u;
        // 0x2c96b4: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96b0) {
            ctx->pc = 0x2C96E0u;
            goto label_2c96e0;
        }
    }
    ctx->pc = 0x2C96B8u;
label_2c96b8:
    // 0x2c96b8: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x2c96b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c96bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C96BCu;
    {
        const bool branch_taken_0x2c96bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c96bc) {
            ctx->pc = 0x2C96D8u;
            goto label_2c96d8;
        }
    }
    ctx->pc = 0x2C96C4u;
    // 0x2c96c4: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c96c8: 0x544a0005  bnel        $v0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C96C8u;
    {
        const bool branch_taken_0x2c96c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2c96c8) {
            ctx->pc = 0x2C96CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C96C8u;
            // 0x2c96cc: 0xad660014  sw          $a2, 0x14($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C96E0u;
            goto label_2c96e0;
        }
    }
    ctx->pc = 0x2C96D0u;
    // 0x2c96d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C96D0u;
    {
        const bool branch_taken_0x2c96d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96D0u;
        // 0x2c96d4: 0xad660010  sw          $a2, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96d0) {
            ctx->pc = 0x2C96E0u;
            goto label_2c96e0;
        }
    }
    ctx->pc = 0x2C96D8u;
label_2c96d8:
    // 0x2c96d8: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C96D8u;
    SET_GPR_U32(ctx, 31, 0x2C96E0u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C96D8u, 0x2C96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C96E0u;
label_2c96e0:
    // 0x2c96e0: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C96E0u;
    {
        const bool branch_taken_0x2c96e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96E0u;
        // 0x2c96e4: 0x109102b  sltu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96e0) {
            ctx->pc = 0x2C97ACu;
            goto label_2c97ac;
        }
    }
    ctx->pc = 0x2C96E8u;
label_2c96e8:
    // 0x2c96e8: 0x25845b88  addiu       $a0, $t4, 0x5B88
    ctx->pc = 0x2c96e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
    // 0x2c96ec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c96f0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c96f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c96f4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C96F4u;
    {
        const bool branch_taken_0x2c96f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c96f4) {
            ctx->pc = 0x2C9760u;
            goto label_2c9760;
        }
    }
    ctx->pc = 0x2C96FCu;
    // 0x2c96fc: 0xaccb0018  sw          $t3, 0x18($a2)
    ctx->pc = 0x2c96fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 11));
    // 0x2c9700: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x2c9700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2c9704: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9704u;
    {
        const bool branch_taken_0x2c9704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9704) {
            ctx->pc = 0x2C9708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9704u;
            // 0x2c9708: 0x8d440014  lw          $a0, 0x14($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9734u;
            goto label_2c9734;
        }
    }
    ctx->pc = 0x2C970Cu;
    // 0x2c970c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c9710: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c9710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9714: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9714u;
    {
        const bool branch_taken_0x2c9714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9714) {
            ctx->pc = 0x2C9728u;
            goto label_2c9728;
        }
    }
    ctx->pc = 0x2C971Cu;
    // 0x2c971c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2c971cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2c9720: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9720u;
    {
        const bool branch_taken_0x2c9720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9720u;
        // 0x2c9724: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9720) {
            ctx->pc = 0x2C9730u;
            goto label_2c9730;
        }
    }
    ctx->pc = 0x2C9728u;
label_2c9728:
    // 0x2c9728: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9728u;
    SET_GPR_U32(ctx, 31, 0x2C9730u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9728u, 0x2C9730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9730u;
label_2c9730:
    // 0x2c9730: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x2c9730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_2c9734:
    // 0x2c9734: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C9734u;
    {
        const bool branch_taken_0x2c9734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9734u;
        // 0x2c9738: 0x25835b88  addiu       $v1, $t4, 0x5B88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9734) {
            ctx->pc = 0x2C97A8u;
            goto label_2c97a8;
        }
    }
    ctx->pc = 0x2C973Cu;
    // 0x2c973c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c9740: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c9740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9744: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9744u;
    {
        const bool branch_taken_0x2c9744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9744) {
            ctx->pc = 0x2C9758u;
            goto label_2c9758;
        }
    }
    ctx->pc = 0x2C974Cu;
    // 0x2c974c: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x2c974cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x2c9750: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C9750u;
    {
        const bool branch_taken_0x2c9750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9750u;
        // 0x2c9754: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9750) {
            ctx->pc = 0x2C97A8u;
            goto label_2c97a8;
        }
    }
    ctx->pc = 0x2C9758u;
label_2c9758:
    // 0x2c9758: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9758u;
    SET_GPR_U32(ctx, 31, 0x2C9760u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9758u, 0x2C9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9760u;
label_2c9760:
    // 0x2c9760: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9760u;
    SET_GPR_U32(ctx, 31, 0x2C9768u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9760u, 0x2C9768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9768u;
label_2c9768:
    // 0x2c9768: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2c9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c976c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c9770: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c9770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c9774: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9774u;
    {
        const bool branch_taken_0x2c9774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9774u;
        // 0x2c9778: 0x109102b  sltu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9774) {
            ctx->pc = 0x2C97ACu;
            goto label_2c97ac;
        }
    }
    ctx->pc = 0x2C977Cu;
    // 0x2c977c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2c977cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2c9780: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c9780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9784: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x2c9784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x2c9788: 0x36050001  ori         $a1, $s0, 0x1
    ctx->pc = 0x2c9788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x2c978c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2c978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c9790: 0x1102021  addu        $a0, $t0, $s0
    ctx->pc = 0x2c9790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c9794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c9794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c9798: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2c9798u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2c979c: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x2c979cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x2c97a0: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x2C97A0u;
    {
        const bool branch_taken_0x2c97a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97A0u;
        // 0x2c97a4: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97a0) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C97A8u;
label_2c97a8:
    // 0x2c97a8: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x2c97a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_2c97ac:
    // 0x2c97ac: 0x10400147  beqz        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x2C97ACu;
    {
        const bool branch_taken_0x2c97ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c97ac) {
            ctx->pc = 0x2C9CCCu;
            goto label_2c9ccc;
        }
    }
    ctx->pc = 0x2C97B4u;
    // 0x2c97b4: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x2c97b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c97b8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2c97b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2c97bc: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x2C97BCu;
    {
        const bool branch_taken_0x2c97bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97BCu;
        // 0x2c97c0: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97bc) {
            ctx->pc = 0x2C9CCCu;
            goto label_2c9ccc;
        }
    }
    ctx->pc = 0x2C97C4u;
    // 0x2c97c4: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2C97C4u;
    {
        const bool branch_taken_0x2c97c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97C4u;
        // 0x2c97c8: 0x36040001  ori         $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97c4) {
            ctx->pc = 0x2C9AD4u;
            goto label_2c9ad4;
        }
    }
    ctx->pc = 0x2C97CCu;
    // 0x2c97cc: 0x25855b88  addiu       $a1, $t4, 0x5B88
    ctx->pc = 0x2c97ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
    // 0x2c97d0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2c97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c97d4: 0x55220014  bnel        $t1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C97D4u;
    {
        const bool branch_taken_0x2c97d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c97d4) {
            ctx->pc = 0x2C97D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C97D4u;
            // 0x2c97d8: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9828u;
            goto label_2c9828;
        }
    }
    ctx->pc = 0x2C97DCu;
    // 0x2c97dc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2c97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2c97e0: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x2c97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x2c97e4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2c97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c97e8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2c97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x2c97ec: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2c97ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2c97f0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2c97f4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2c97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2c97f8: 0x55030004  bnel        $t0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C97F8u;
    {
        const bool branch_taken_0x2c97f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c97f8) {
            ctx->pc = 0x2C97FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C97F8u;
            // 0x2c97fc: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C980Cu;
            goto label_2c980c;
        }
    }
    ctx->pc = 0x2C9800u;
    // 0x2c9800: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2c9800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2c9804: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2c9804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2c9808: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2c9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2c980c:
    // 0x2c980c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c980cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c9810: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2C9810u;
    {
        const bool branch_taken_0x2c9810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9810u;
        // 0x2c9814: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9810) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C9818u;
    // 0x2c9818: 0xc0b213c  jal         func_2C84F0
    ctx->pc = 0x2C9818u;
    SET_GPR_U32(ctx, 31, 0x2C9820u);
    ctx->pc = 0x2C981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9818u;
    // 0x2c981c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C84F0u, 0x2C9818u, 0x2C9820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9820u;
label_2c9820:
    // 0x2c9820: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2C9820u;
    {
        const bool branch_taken_0x2c9820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9820u;
        // 0x2c9824: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9820) {
            ctx->pc = 0x2C9CF8u;
            goto label_2c9cf8;
        }
    }
    ctx->pc = 0x2C9828u;
label_2c9828:
    // 0x2c9828: 0x1522000a  bne         $t1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9828u;
    {
        const bool branch_taken_0x2c9828 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9828) {
            ctx->pc = 0x2C9854u;
            goto label_2c9854;
        }
    }
    ctx->pc = 0x2C9830u;
    // 0x2c9830: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2c9830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c9834: 0xaca80014  sw          $t0, 0x14($a1)
    ctx->pc = 0x2c9834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
    // 0x2c9838: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c983c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2c983cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2c9840: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x2c9840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c9844: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2c9844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2c9848: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x2c9848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c984c: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x2C984Cu;
    {
        const bool branch_taken_0x2c984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C984Cu;
        // 0x2c9850: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c984c) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C9854u;
label_2c9854:
    // 0x2c9854: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c9854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9858: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c9858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c985c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2c985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2c9860: 0x230c2  srl         $a2, $v0, 3
    ctx->pc = 0x2c9860u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2c9864: 0x2cc30020  sltiu       $v1, $a2, 0x20
    ctx->pc = 0x2c9864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c9868: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C9868u;
    {
        const bool branch_taken_0x2c9868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9868u;
        // 0x2c986c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9868) {
            ctx->pc = 0x2C98F8u;
            goto label_2c98f8;
        }
    }
    ctx->pc = 0x2C9870u;
    // 0x2c9870: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x2c9870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2c9874: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x2c9874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2c9878: 0x1487000a  bne         $a0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9878u;
    {
        const bool branch_taken_0x2c9878 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9878u;
        // 0x2c987c: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9878) {
            ctx->pc = 0x2C98A4u;
            goto label_2c98a4;
        }
    }
    ctx->pc = 0x2C9880u;
    // 0x2c9880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9884: 0x8d835b88  lw          $v1, 0x5B88($t4)
    ctx->pc = 0x2c9884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 23432)));
    // 0x2c9888: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x2c9888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c988c: 0x1105821  addu        $t3, $t0, $s0
    ctx->pc = 0x2c988cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c9890: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c9890u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c9894: 0x360a0001  ori         $t2, $s0, 0x1
    ctx->pc = 0x2c9894u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x2c9898: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c9898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c989c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2C989Cu;
    {
        const bool branch_taken_0x2c989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C989Cu;
        // 0x2c98a0: 0xad835b88  sw          $v1, 0x5B88($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 23432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c989c) {
            ctx->pc = 0x2C9AB4u;
            goto label_2c9ab4;
        }
    }
    ctx->pc = 0x2C98A4u;
label_2c98a4:
    // 0x2c98a4: 0x24a20024  addiu       $v0, $a1, 0x24
    ctx->pc = 0x2c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x2c98a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c98ac: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C98ACu;
    {
        const bool branch_taken_0x2c98ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c98ac) {
            ctx->pc = 0x2C98C4u;
            goto label_2c98c4;
        }
    }
    ctx->pc = 0x2C98B4u;
    // 0x2c98b4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2c98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c98b8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c98b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c98bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C98BCu;
    {
        const bool branch_taken_0x2c98bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c98bc) {
            ctx->pc = 0x2C98F0u;
            goto label_2c98f0;
        }
    }
    ctx->pc = 0x2C98C4u;
label_2c98c4:
    // 0x2c98c4: 0x50e30006  beql        $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C98C4u;
    {
        const bool branch_taken_0x2c98c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c98c4) {
            ctx->pc = 0x2C98C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C98C4u;
            // 0x2c98c8: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C98E0u;
            goto label_2c98e0;
        }
    }
    ctx->pc = 0x2C98CCu;
    // 0x2c98cc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2c98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c98d0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2c98d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c98d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C98D4u;
    {
        const bool branch_taken_0x2c98d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c98d4) {
            ctx->pc = 0x2C98F0u;
            goto label_2c98f0;
        }
    }
    ctx->pc = 0x2C98DCu;
    // 0x2c98dc: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2c98dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_2c98e0:
    // 0x2c98e0: 0x1105821  addu        $t3, $t0, $s0
    ctx->pc = 0x2c98e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c98e4: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2c98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x2c98e8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2C98E8u;
    {
        const bool branch_taken_0x2c98e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98E8u;
        // 0x2c98ec: 0x360a0001  ori         $t2, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98e8) {
            ctx->pc = 0x2C9AB4u;
            goto label_2c9ab4;
        }
    }
    ctx->pc = 0x2C98F0u;
label_2c98f0:
    // 0x2c98f0: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C98F0u;
    SET_GPR_U32(ctx, 31, 0x2C98F8u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C98F0u, 0x2C98F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98F8u;
label_2c98f8:
    // 0x2c98f8: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2c98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2c98fc: 0x1069000d  beq         $v1, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C98FCu;
    {
        const bool branch_taken_0x2c98fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98FCu;
        // 0x2c9900: 0x8d270018  lw          $a3, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98fc) {
            ctx->pc = 0x2C9934u;
            goto label_2c9934;
        }
    }
    ctx->pc = 0x2C9904u;
    // 0x2c9904: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2c9904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9908: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2c9908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c990c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2c990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2c9910: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c9910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9914: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9914u;
    {
        const bool branch_taken_0x2c9914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9914u;
        // 0x2c9918: 0x1105821  addu        $t3, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9914) {
            ctx->pc = 0x2C992Cu;
            goto label_2c992c;
        }
    }
    ctx->pc = 0x2C991Cu;
    // 0x2c991c: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2c991cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2c9920: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2c9920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2c9924: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C9924u;
    {
        const bool branch_taken_0x2c9924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9924u;
        // 0x2c9928: 0x360a0001  ori         $t2, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9924) {
            ctx->pc = 0x2C99B4u;
            goto label_2c99b4;
        }
    }
    ctx->pc = 0x2C992Cu;
label_2c992c:
    // 0x2c992c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C992Cu;
    SET_GPR_U32(ctx, 31, 0x2C9934u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C992Cu, 0x2C9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9934u;
label_2c9934:
    // 0x2c9934: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x2c9934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2c9938: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9938u;
    {
        const bool branch_taken_0x2c9938 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9938u;
        // 0x2c993c: 0x25240014  addiu       $a0, $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9938) {
            ctx->pc = 0x2C9954u;
            goto label_2c9954;
        }
    }
    ctx->pc = 0x2C9940u;
    // 0x2c9940: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x2c9940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c9944: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x2c9944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2c9948: 0x1105821  addu        $t3, $t0, $s0
    ctx->pc = 0x2c9948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c994c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C994Cu;
    {
        const bool branch_taken_0x2c994c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C994Cu;
        // 0x2c9950: 0x360a0001  ori         $t2, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c994c) {
            ctx->pc = 0x2C99B4u;
            goto label_2c99b4;
        }
    }
    ctx->pc = 0x2C9954u;
label_2c9954:
    // 0x2c9954: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c9958: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x2c9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2c995c: 0x1105821  addu        $t3, $t0, $s0
    ctx->pc = 0x2c995cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c9960: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9960u;
    {
        const bool branch_taken_0x2c9960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9960u;
        // 0x2c9964: 0x360a0001  ori         $t2, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9960) {
            ctx->pc = 0x2C9978u;
            goto label_2c9978;
        }
    }
    ctx->pc = 0x2C9968u;
label_2c9968:
    // 0x2c9968: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c9968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c996c:
    // 0x2c996c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2c996cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9970: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c9974: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x2c9974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_2c9978:
    // 0x2c9978: 0x0  nop
    ctx->pc = 0x2c9978u;
    // NOP
    // 0x2c997c: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C997Cu;
    {
        const bool branch_taken_0x2c997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c997c) {
            ctx->pc = 0x2C9980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C997Cu;
            // 0x2c9980: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C996Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c996c;
        }
    }
    ctx->pc = 0x2C9984u;
    // 0x2c9984: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2c9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c9988: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C9988u;
    {
        const bool branch_taken_0x2c9988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9988u;
        // 0x2c998c: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9988) {
            ctx->pc = 0x2C9968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9968;
        }
    }
    ctx->pc = 0x2C9990u;
    // 0x2c9990: 0x25835b88  addiu       $v1, $t4, 0x5B88
    ctx->pc = 0x2c9990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
    // 0x2c9994: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c9998: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c9998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c999c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C999Cu;
    {
        const bool branch_taken_0x2c999c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c999c) {
            ctx->pc = 0x2C99ACu;
            goto label_2c99ac;
        }
    }
    ctx->pc = 0x2C99A4u;
    // 0x2c99a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C99A4u;
    {
        const bool branch_taken_0x2c99a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99A4u;
        // 0x2c99a8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99a4) {
            ctx->pc = 0x2C99B4u;
            goto label_2c99b4;
        }
    }
    ctx->pc = 0x2C99ACu;
label_2c99ac:
    // 0x2c99ac: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C99ACu;
    SET_GPR_U32(ctx, 31, 0x2C99B4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C99ACu, 0x2C99B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99B4u;
label_2c99b4:
    // 0x2c99b4: 0x10e0003f  beqz        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C99B4u;
    {
        const bool branch_taken_0x2c99b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99B4u;
        // 0x2c99b8: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99b4) {
            ctx->pc = 0x2C9AB4u;
            goto label_2c9ab4;
        }
    }
    ctx->pc = 0x2C99BCu;
    // 0x2c99bc: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x2c99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2c99c0: 0x24655cb4  addiu       $a1, $v1, 0x5CB4
    ctx->pc = 0x2c99c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 23732));
    // 0x2c99c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c99c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c99cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c99d0: 0x5523000c  bnel        $t1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C99D0u;
    {
        const bool branch_taken_0x2c99d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c99d0) {
            ctx->pc = 0x2C99D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C99D0u;
            // 0x2c99d4: 0x8ca2fee4  lw          $v0, -0x11C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9A04u;
            goto label_2c9a04;
        }
    }
    ctx->pc = 0x2C99D8u;
    // 0x2c99d8: 0x14c00016  bnez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C99D8u;
    {
        const bool branch_taken_0x2c99d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99D8u;
        // 0x2c99dc: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99d8) {
            ctx->pc = 0x2C9A34u;
            goto label_2c9a34;
        }
    }
    ctx->pc = 0x2C99E0u;
    // 0x2c99e0: 0x8d24001c  lw          $a0, 0x1C($t1)
    ctx->pc = 0x2c99e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2c99e4: 0x24a5fed4  addiu       $a1, $a1, -0x12C
    ctx->pc = 0x2c99e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966996));
    // 0x2c99e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c99ec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2c99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c99f0: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c99f4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c99f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c99f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c99f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c99fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C99FCu;
    {
        const bool branch_taken_0x2c99fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99FCu;
        // 0x2c9a00: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99fc) {
            ctx->pc = 0x2C9A2Cu;
            goto label_2c9a2c;
        }
    }
    ctx->pc = 0x2C9A04u;
label_2c9a04:
    // 0x2c9a04: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2c9a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9a08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9A08u;
    {
        const bool branch_taken_0x2c9a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a08) {
            ctx->pc = 0x2C9A24u;
            goto label_2c9a24;
        }
    }
    ctx->pc = 0x2C9A10u;
    // 0x2c9a10: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2c9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c9a14: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9A14u;
    {
        const bool branch_taken_0x2c9a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x2c9a14) {
            ctx->pc = 0x2C9A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9A14u;
            // 0x2c9a18: 0xace60014  sw          $a2, 0x14($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9A2Cu;
            goto label_2c9a2c;
        }
    }
    ctx->pc = 0x2C9A1Cu;
    // 0x2c9a1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9A1Cu;
    {
        const bool branch_taken_0x2c9a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A1Cu;
        // 0x2c9a20: 0xace60010  sw          $a2, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a1c) {
            ctx->pc = 0x2C9A2Cu;
            goto label_2c9a2c;
        }
    }
    ctx->pc = 0x2C9A24u;
label_2c9a24:
    // 0x2c9a24: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9A24u;
    SET_GPR_U32(ctx, 31, 0x2C9A2Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9A24u, 0x2C9A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A2Cu;
label_2c9a2c:
    // 0x2c9a2c: 0x50c00022  beql        $a2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C9A2Cu;
    {
        const bool branch_taken_0x2c9a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a2c) {
            ctx->pc = 0x2C9A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9A2Cu;
            // 0x2c9a30: 0xad0a0004  sw          $t2, 0x4($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9AB8u;
            goto label_2c9ab8;
        }
    }
    ctx->pc = 0x2C9A34u;
label_2c9a34:
    // 0x2c9a34: 0x25845b88  addiu       $a0, $t4, 0x5B88
    ctx->pc = 0x2c9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
    // 0x2c9a38: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c9a3c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c9a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9a40: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C9A40u;
    {
        const bool branch_taken_0x2c9a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a40) {
            ctx->pc = 0x2C9AACu;
            goto label_2c9aac;
        }
    }
    ctx->pc = 0x2C9A48u;
    // 0x2c9a48: 0xacc70018  sw          $a3, 0x18($a2)
    ctx->pc = 0x2c9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 7));
    // 0x2c9a4c: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x2c9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c9a50: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9A50u;
    {
        const bool branch_taken_0x2c9a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a50) {
            ctx->pc = 0x2C9A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9A50u;
            // 0x2c9a54: 0x8d240014  lw          $a0, 0x14($t1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9A80u;
            goto label_2c9a80;
        }
    }
    ctx->pc = 0x2C9A58u;
    // 0x2c9a58: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c9a5c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c9a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9a60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9A60u;
    {
        const bool branch_taken_0x2c9a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a60) {
            ctx->pc = 0x2C9A74u;
            goto label_2c9a74;
        }
    }
    ctx->pc = 0x2C9A68u;
    // 0x2c9a68: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2c9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2c9a6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9A6Cu;
    {
        const bool branch_taken_0x2c9a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A6Cu;
        // 0x2c9a70: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a6c) {
            ctx->pc = 0x2C9A7Cu;
            goto label_2c9a7c;
        }
    }
    ctx->pc = 0x2C9A74u;
label_2c9a74:
    // 0x2c9a74: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9A74u;
    SET_GPR_U32(ctx, 31, 0x2C9A7Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9A74u, 0x2C9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A7Cu;
label_2c9a7c:
    // 0x2c9a7c: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x2c9a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_2c9a80:
    // 0x2c9a80: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9A80u;
    {
        const bool branch_taken_0x2c9a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A80u;
        // 0x2c9a84: 0x25835b88  addiu       $v1, $t4, 0x5B88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a80) {
            ctx->pc = 0x2C9AB4u;
            goto label_2c9ab4;
        }
    }
    ctx->pc = 0x2C9A88u;
    // 0x2c9a88: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c9a8c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c9a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9a90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9A90u;
    {
        const bool branch_taken_0x2c9a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a90) {
            ctx->pc = 0x2C9AA4u;
            goto label_2c9aa4;
        }
    }
    ctx->pc = 0x2C9A98u;
    // 0x2c9a98: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x2c9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    // 0x2c9a9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9A9Cu;
    {
        const bool branch_taken_0x2c9a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A9Cu;
        // 0x2c9aa0: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a9c) {
            ctx->pc = 0x2C9AB4u;
            goto label_2c9ab4;
        }
    }
    ctx->pc = 0x2C9AA4u;
label_2c9aa4:
    // 0x2c9aa4: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9AA4u;
    SET_GPR_U32(ctx, 31, 0x2C9AACu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9AA4u, 0x2C9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AACu;
label_2c9aac:
    // 0x2c9aac: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9AACu;
    SET_GPR_U32(ctx, 31, 0x2C9AB4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9AACu, 0x2C9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AB4u;
label_2c9ab4:
    // 0x2c9ab4: 0xad0a0004  sw          $t2, 0x4($t0)
    ctx->pc = 0x2c9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
label_2c9ab8:
    // 0x2c9ab8: 0x25835b88  addiu       $v1, $t4, 0x5B88
    ctx->pc = 0x2c9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 23432));
    // 0x2c9abc: 0xad700000  sw          $s0, 0x0($t3)
    ctx->pc = 0x2c9abcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 16));
    // 0x2c9ac0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c9ac4: 0x1502000b  bne         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9AC4u;
    {
        const bool branch_taken_0x2c9ac4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AC4u;
        // 0x2c9ac8: 0x1020c2  srl         $a0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ac4) {
            ctx->pc = 0x2C9AF4u;
            goto label_2c9af4;
        }
    }
    ctx->pc = 0x2C9ACCu;
    // 0x2c9acc: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2C9ACCu;
    {
        const bool branch_taken_0x2c9acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9ACCu;
        // 0x2c9ad0: 0xac700008  sw          $s0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9acc) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C9AD4u;
label_2c9ad4:
    // 0x2c9ad4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9ad8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2c9ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2c9adc: 0x1101821  addu        $v1, $t0, $s0
    ctx->pc = 0x2c9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c9ae0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2c9ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2c9ae4: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2c9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2c9ae8: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x2c9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x2c9aec: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2c9aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2c9af0: 0x1020c2  srl         $a0, $s0, 3
    ctx->pc = 0x2c9af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
label_2c9af4:
    // 0x2c9af4: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x2c9af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c9af8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C9AF8u;
    {
        const bool branch_taken_0x2c9af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AF8u;
        // 0x2c9afc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9af8) {
            ctx->pc = 0x2C9B6Cu;
            goto label_2c9b6c;
        }
    }
    ctx->pc = 0x2C9B00u;
    // 0x2c9b00: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2c9b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c9b04: 0x24465bac  addiu       $a2, $v0, 0x5BAC
    ctx->pc = 0x2c9b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 23468));
    // 0x2c9b08: 0x8cc7ffdc  lw          $a3, -0x24($a2)
    ctx->pc = 0x2c9b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967260)));
    // 0x2c9b0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c9b10: 0x24c9ffdc  addiu       $t1, $a2, -0x24
    ctx->pc = 0x2c9b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967260));
    // 0x2c9b14: 0x871006  srlv        $v0, $a3, $a0
    ctx->pc = 0x2c9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c9b18: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c9b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c9b1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9b20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9B20u;
    {
        const bool branch_taken_0x2c9b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B20u;
        // 0x2c9b24: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b20) {
            ctx->pc = 0x2C9B3Cu;
            goto label_2c9b3c;
        }
    }
    ctx->pc = 0x2C9B28u;
    // 0x2c9b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9b2c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c9b30: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2c9b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2c9b34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9B34u;
    {
        const bool branch_taken_0x2c9b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B34u;
        // 0x2c9b38: 0xacc2ffdc  sw          $v0, -0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294967260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b34) {
            ctx->pc = 0x2C9B58u;
            goto label_2c9b58;
        }
    }
    ctx->pc = 0x2C9B3Cu;
label_2c9b3c:
    // 0x2c9b3c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2c9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c9b40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9b44: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c9b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9B48u;
    {
        const bool branch_taken_0x2c9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B48u;
        // 0x2c9b4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b48) {
            ctx->pc = 0x2C9B58u;
            goto label_2c9b58;
        }
    }
    ctx->pc = 0x2C9B50u;
    // 0x2c9b50: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9B50u;
    SET_GPR_U32(ctx, 31, 0x2C9B58u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9B50u, 0x2C9B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B58u;
label_2c9b58:
    // 0x2c9b58: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x2c9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x2c9b5c: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x2c9b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x2c9b60: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x2c9b60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x2c9b64: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2C9B64u;
    {
        const bool branch_taken_0x2c9b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B64u;
        // 0x2c9b68: 0xad050008  sw          $a1, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b64) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C9B6Cu;
label_2c9b6c:
    // 0x2c9b6c: 0x101a02  srl         $v1, $s0, 8
    ctx->pc = 0x2c9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2c9b70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9B70u;
    {
        const bool branch_taken_0x2c9b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B70u;
        // 0x2c9b74: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b70) {
            ctx->pc = 0x2C9B80u;
            goto label_2c9b80;
        }
    }
    ctx->pc = 0x2C9B78u;
    // 0x2c9b78: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C9B78u;
    {
        const bool branch_taken_0x2c9b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B78u;
        // 0x2c9b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b78) {
            ctx->pc = 0x2C9BE4u;
            goto label_2c9be4;
        }
    }
    ctx->pc = 0x2C9B80u;
label_2c9b80:
    // 0x2c9b80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c9b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c9b84: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9B84u;
    {
        const bool branch_taken_0x2c9b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B84u;
        // 0x2c9b88: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b84) {
            ctx->pc = 0x2C9BE4u;
            goto label_2c9be4;
        }
    }
    ctx->pc = 0x2C9B8Cu;
    // 0x2c9b8c: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x2c9b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x2c9b90: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2c9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2c9b94: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c9b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c9b98: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2c9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c9b9c: 0x2462f000  addiu       $v0, $v1, -0x1000
    ctx->pc = 0x2c9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x2c9ba0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c9ba4: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2c9ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c9ba8: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c9bac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c9bb0: 0x2462c000  addiu       $v0, $v1, -0x4000
    ctx->pc = 0x2c9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x2c9bb4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c9bb8: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x2c9bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c9bbc: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c9bc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c9bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c9bc4: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x2c9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2c9bc8: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2c9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2c9bcc: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x2c9bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9bd0: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x2c9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x2c9bd4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c9bd8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x2c9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c9bdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9be0: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2c9be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c9be4:
    // 0x2c9be4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c9be8: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x2c9be8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x2c9bec: 0x24425cb4  addiu       $v0, $v0, 0x5CB4
    ctx->pc = 0x2c9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23732));
    // 0x2c9bf0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x2c9bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x2c9bf4: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x2c9bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x2c9bf8: 0x2447fed4  addiu       $a3, $v0, -0x12C
    ctx->pc = 0x2c9bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966996));
    // 0x2c9bfc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2c9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c9c00: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x2c9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c9c04: 0xc51806  srlv        $v1, $a1, $a2
    ctx->pc = 0x2c9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c9c08: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c9c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c9c0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c9c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c9c10: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9C10u;
    {
        const bool branch_taken_0x2c9c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C10u;
        // 0x2c9c14: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c10) {
            ctx->pc = 0x2C9C30u;
            goto label_2c9c30;
        }
    }
    ctx->pc = 0x2C9C18u;
    // 0x2c9c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c1c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x2c9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c9c20: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2c9c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2c9c24: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2c9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2c9c28: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C9C28u;
    {
        const bool branch_taken_0x2c9c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C28u;
        // 0x2c9c2c: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c28) {
            ctx->pc = 0x2C9CD4u;
            goto label_2c9cd4;
        }
    }
    ctx->pc = 0x2C9C30u;
label_2c9c30:
    // 0x2c9c30: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2c9c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9c34: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2c9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2c9c38: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9C38u;
    {
        const bool branch_taken_0x2c9c38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C38u;
        // 0x2c9c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c38) {
            ctx->pc = 0x2C9C50u;
            goto label_2c9c50;
        }
    }
    ctx->pc = 0x2C9C40u;
    // 0x2c9c40: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2c9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2c9c44: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c9c48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9c4c: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x2c9c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_2c9c50:
    // 0x2c9c50: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c9c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9c54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C9C54u;
    {
        const bool branch_taken_0x2c9c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C54u;
        // 0x2c9c58: 0x34c6fffc  ori         $a2, $a2, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c54) {
            ctx->pc = 0x2C9C84u;
            goto label_2c9c84;
        }
    }
    ctx->pc = 0x2C9C5Cu;
    // 0x2c9c5c: 0x0  nop
    ctx->pc = 0x2c9c5cu;
    // NOP
label_2c9c60:
    // 0x2c9c60: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2c9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c9c64: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2c9c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c9c68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9C68u;
    {
        const bool branch_taken_0x2c9c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C68u;
        // 0x2c9c6c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c68) {
            ctx->pc = 0x2C9C7Cu;
            goto label_2c9c7c;
        }
    }
    ctx->pc = 0x2C9C70u;
    // 0x2c9c70: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2c9c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c9c74: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C9C74u;
    {
        const bool branch_taken_0x2c9c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c74) {
            ctx->pc = 0x2C9C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9C74u;
            // 0x2c9c78: 0xaca8000c  sw          $t0, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CE4u;
            goto label_2c9ce4;
        }
    }
    ctx->pc = 0x2C9C7Cu;
label_2c9c7c:
    // 0x2c9c7c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C84u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9C7Cu, 0x2C9C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C84u;
label_2c9c84:
    // 0x2c9c84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c9c88: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c9c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2c9c8c: 0x1050fff4  beq         $v0, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C9C8Cu;
    {
        const bool branch_taken_0x2c9c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C8Cu;
        // 0x2c9c90: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c8c) {
            ctx->pc = 0x2C9C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9c60;
        }
    }
    ctx->pc = 0x2C9C94u;
    // 0x2c9c94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9c98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c9c9c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2c9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c9ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9ca4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9CA4u;
    {
        const bool branch_taken_0x2c9ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CA4u;
        // 0x2c9ca8: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ca4) {
            ctx->pc = 0x2C9CB4u;
            goto label_2c9cb4;
        }
    }
    ctx->pc = 0x2C9CACu;
    // 0x2c9cac: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x2C9CACu;
    {
        const bool branch_taken_0x2c9cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CACu;
        // 0x2c9cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cac) {
            ctx->pc = 0x2C9C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9c84;
        }
    }
    ctx->pc = 0x2C9CB4u;
label_2c9cb4:
    // 0x2c9cb4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2c9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c9cb8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c9cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9cbc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9CBCu;
    {
        const bool branch_taken_0x2c9cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cbc) {
            ctx->pc = 0x2C9CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9CBCu;
            // 0x2c9cc0: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CD4u;
            goto label_2c9cd4;
        }
    }
    ctx->pc = 0x2C9CC4u;
    // 0x2c9cc4: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9CC4u;
    SET_GPR_U32(ctx, 31, 0x2C9CCCu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9CC4u, 0x2C9CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CCCu;
label_2c9ccc:
    // 0x2c9ccc: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9CCCu;
    SET_GPR_U32(ctx, 31, 0x2C9CD4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9CCCu, 0x2C9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CD4u;
label_2c9cd4:
    // 0x2c9cd4: 0xad040018  sw          $a0, 0x18($t0)
    ctx->pc = 0x2c9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 4));
    // 0x2c9cd8: 0xad080008  sw          $t0, 0x8($t0)
    ctx->pc = 0x2c9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 8));
    // 0x2c9cdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9CDCu;
    {
        const bool branch_taken_0x2c9cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CDCu;
        // 0x2c9ce0: 0xad08000c  sw          $t0, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cdc) {
            ctx->pc = 0x2C9CF4u;
            goto label_2c9cf4;
        }
    }
    ctx->pc = 0x2C9CE4u;
label_2c9ce4:
    // 0x2c9ce4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2c9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2c9ce8: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x2c9ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x2c9cec: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x2c9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x2c9cf0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x2c9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_2c9cf4:
    // 0x2c9cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9cf8:
    // 0x2c9cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9cfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D00u;
        // 0x2c9d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9D08u;
}
