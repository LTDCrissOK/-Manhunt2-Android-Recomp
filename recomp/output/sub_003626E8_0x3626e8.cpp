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

// Function: sub_003626E8
// Address: 0x3626e8 - 0x362818
void sub_003626E8_0x3626e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003626E8_0x3626e8");
#endif

    switch (ctx->pc) {
        case 0x36272cu: goto label_36272c;
        case 0x3627e0u: goto label_3627e0;
        case 0x362800u: goto label_362800;
        default: break;
    }

    ctx->pc = 0x3626e8u;

    // 0x3626e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3626e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3626ec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3626ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3626f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3626f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3626f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3626f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3626f8: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x3626f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3626fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3626fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362700: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x362700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362704: 0x1222003e  beq         $s1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x362704u;
    {
        const bool branch_taken_0x362704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x362708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362704u;
        // 0x362708: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362704) {
            ctx->pc = 0x362800u;
            goto label_362800;
        }
    }
    ctx->pc = 0x36270Cu;
    // 0x36270c: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x36270cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x362710: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x362710u;
    {
        const bool branch_taken_0x362710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x362710) {
            ctx->pc = 0x362714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362710u;
            // 0x362714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362804u;
            goto label_362804;
        }
    }
    ctx->pc = 0x362718u;
    // 0x362718: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x362718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36271c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36271Cu;
    {
        const bool branch_taken_0x36271c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x362720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36271Cu;
        // 0x362720: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36271c) {
            ctx->pc = 0x362734u;
            goto label_362734;
        }
    }
    ctx->pc = 0x362724u;
    // 0x362724: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x362724u;
    SET_GPR_U32(ctx, 31, 0x36272Cu);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x362724u, 0x36272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36272Cu;
label_36272c:
    // 0x36272c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x36272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x362730: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x362730u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_362734:
    // 0x362734: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x362734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x362738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x362738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36273c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36273cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362740: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x362740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x362744: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x362744u;
    {
        const bool branch_taken_0x362744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x362748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362744u;
        // 0x362748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362744) {
            ctx->pc = 0x362758u;
            goto label_362758;
        }
    }
    ctx->pc = 0x36274Cu;
    // 0x36274c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362750: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362750u;
    {
        const bool branch_taken_0x362750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x362750) {
            ctx->pc = 0x362754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362750u;
            // 0x362754: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362760u;
            goto label_362760;
        }
    }
    ctx->pc = 0x362758u;
label_362758:
    // 0x362758: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x362758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36275c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_362760:
    // 0x362760: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x362760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x362764: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x362764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x362768: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362768u;
    {
        const bool branch_taken_0x362768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362768u;
        // 0x36276c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362768) {
            ctx->pc = 0x362788u;
            goto label_362788;
        }
    }
    ctx->pc = 0x362770u;
    // 0x362770: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x362770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362774: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362774u;
    {
        const bool branch_taken_0x362774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x362778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362774u;
        // 0x362778: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362774) {
            ctx->pc = 0x362784u;
            goto label_362784;
        }
    }
    ctx->pc = 0x36277Cu;
    // 0x36277c: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36277Cu;
    {
        const bool branch_taken_0x36277c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x36277c) {
            ctx->pc = 0x362788u;
            goto label_362788;
        }
    }
    ctx->pc = 0x362784u;
label_362784:
    // 0x362784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x362784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_362788:
    // 0x362788: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x362788u;
    {
        const bool branch_taken_0x362788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x362788) {
            ctx->pc = 0x3627B8u;
            goto label_3627b8;
        }
    }
    ctx->pc = 0x362790u;
    // 0x362790: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x362790u;
    {
        const bool branch_taken_0x362790 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x362794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362790u;
        // 0x362794: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362790) {
            ctx->pc = 0x3627A8u;
            goto label_3627a8;
        }
    }
    ctx->pc = 0x362798u;
    // 0x362798: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36279c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x36279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x3627a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3627A0u;
    {
        const bool branch_taken_0x3627a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3627A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3627A0u;
        // 0x3627a4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3627a0) {
            ctx->pc = 0x3627D4u;
            goto label_3627d4;
        }
    }
    ctx->pc = 0x3627A8u;
label_3627a8:
    // 0x3627a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3627a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627ac: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x3627acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x3627b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3627B0u;
    {
        const bool branch_taken_0x3627b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3627B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3627B0u;
        // 0x3627b4: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3627b0) {
            ctx->pc = 0x3627D4u;
            goto label_3627d4;
        }
    }
    ctx->pc = 0x3627B8u;
label_3627b8:
    // 0x3627b8: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3627B8u;
    {
        const bool branch_taken_0x3627b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3627b8) {
            ctx->pc = 0x3627BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3627B8u;
            // 0x3627bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362804u;
            goto label_362804;
        }
    }
    ctx->pc = 0x3627C0u;
    // 0x3627c0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3627C0u;
    {
        const bool branch_taken_0x3627c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3627C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3627C0u;
        // 0x3627c4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3627c0) {
            ctx->pc = 0x3627E8u;
            goto label_3627e8;
        }
    }
    ctx->pc = 0x3627C8u;
    // 0x3627c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3627c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627cc: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x3627ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x3627d0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3627d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3627d4:
    // 0x3627d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3627d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3627d8: 0xc046642  jal         func_119908
    ctx->pc = 0x3627D8u;
    SET_GPR_U32(ctx, 31, 0x3627E0u);
    ctx->pc = 0x3627DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627D8u;
    // 0x3627dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x3627D8u, 0x3627E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627E0u;
label_3627e0:
    // 0x3627e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3627E0u;
    {
        const bool branch_taken_0x3627e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3627E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3627E0u;
        // 0x3627e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3627e0) {
            ctx->pc = 0x362804u;
            goto label_362804;
        }
    }
    ctx->pc = 0x3627E8u;
label_3627e8:
    // 0x3627e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3627e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627ec: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x3627ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x3627f0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3627f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3627f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3627f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3627f8: 0xc046642  jal         func_119908
    ctx->pc = 0x3627F8u;
    SET_GPR_U32(ctx, 31, 0x362800u);
    ctx->pc = 0x3627FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627F8u;
    // 0x3627fc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x3627F8u, 0x362800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362800u;
label_362800:
    // 0x362800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_362804:
    // 0x362804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x362804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x362808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36280c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362810: 0x3e00008  jr          $ra
    ctx->pc = 0x362810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362810u;
        // 0x362814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362818u;
}
