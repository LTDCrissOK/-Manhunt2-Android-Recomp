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

// Function: sub_00276478
// Address: 0x276478 - 0x2766e0
void sub_00276478_0x276478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276478_0x276478");
#endif

    switch (ctx->pc) {
        case 0x2764e4u: goto label_2764e4;
        case 0x2764fcu: goto label_2764fc;
        case 0x276514u: goto label_276514;
        case 0x2765acu: goto label_2765ac;
        case 0x2765d0u: goto label_2765d0;
        case 0x276630u: goto label_276630;
        case 0x276670u: goto label_276670;
        case 0x276698u: goto label_276698;
        default: break;
    }

    ctx->pc = 0x276478u;

    // 0x276478: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x276478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27647c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x27647cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x276480: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x276480u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x276484: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x276484u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x276488: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x276488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27648c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27648cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x276490: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x276490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x276494: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x276494u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x276498: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x276498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x27649c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2764a0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2764a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2764a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2764a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2764a8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2764a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2764ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2764ACu;
    {
        const bool branch_taken_0x2764ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2764B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764ACu;
        // 0x2764b0: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764ac) {
            ctx->pc = 0x2764C0u;
            goto label_2764c0;
        }
    }
    ctx->pc = 0x2764B4u;
    // 0x2764b4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2764b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2764b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2764B8u;
    {
        const bool branch_taken_0x2764b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2764BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764B8u;
        // 0x2764bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764b8) {
            ctx->pc = 0x2764C8u;
            goto label_2764c8;
        }
    }
    ctx->pc = 0x2764C0u;
label_2764c0:
    // 0x2764c0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2764C0u;
    {
        const bool branch_taken_0x2764c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2764C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764C0u;
        // 0x2764c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764c0) {
            ctx->pc = 0x2766ACu;
            goto label_2766ac;
        }
    }
    ctx->pc = 0x2764C8u;
label_2764c8:
    // 0x2764c8: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x2764c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2764cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2764CCu;
    {
        const bool branch_taken_0x2764cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2764D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764CCu;
        // 0x2764d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764cc) {
            ctx->pc = 0x2764DCu;
            goto label_2764dc;
        }
    }
    ctx->pc = 0x2764D4u;
    // 0x2764d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2764d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2764d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2764dc:
    // 0x2764dc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2764DCu;
    SET_GPR_U32(ctx, 31, 0x2764E4u);
    ctx->pc = 0x2764E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2764DCu;
    // 0x2764e0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2764DCu, 0x2764E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2764E4u;
label_2764e4:
    // 0x2764e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2764e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2764e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2764e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2764ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2764ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2764f0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2764f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2764f4: 0xc09d732  jal         func_275CC8
    ctx->pc = 0x2764F4u;
    SET_GPR_U32(ctx, 31, 0x2764FCu);
    ctx->pc = 0x2764F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2764F4u;
    // 0x2764f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CC8u, 0x2764F4u, 0x2764FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2764FCu;
label_2764fc:
    // 0x2764fc: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x2764fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
    // 0x276500: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x276500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276504: 0x26104790  addiu       $s0, $s0, 0x4790
    ctx->pc = 0x276504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18320));
    // 0x276508: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x276508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x27650c: 0xc09d72a  jal         func_275CA8
    ctx->pc = 0x27650Cu;
    SET_GPR_U32(ctx, 31, 0x276514u);
    ctx->pc = 0x276510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27650Cu;
    // 0x276510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CA8u, 0x27650Cu, 0x276514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276514u;
label_276514:
    // 0x276514: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x276514u;
    {
        const bool branch_taken_0x276514 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x276514) {
            ctx->pc = 0x276518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276514u;
            // 0x276518: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27651Cu;
            goto label_27651c;
        }
    }
    ctx->pc = 0x27651Cu;
label_27651c:
    // 0x27651c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276520: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x276520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x276524: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x276524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x276528: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x276528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27652c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x27652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x276530: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x276530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x276534: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x276534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x276538: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x276538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27653c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27653Cu;
    {
        const bool branch_taken_0x27653c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x276540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27653Cu;
        // 0x276540: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27653c) {
            ctx->pc = 0x276568u;
            goto label_276568;
        }
    }
    ctx->pc = 0x276544u;
    // 0x276544: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x276544u;
    {
        const bool branch_taken_0x276544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276544) {
            ctx->pc = 0x276548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276544u;
            // 0x276548: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27655Cu;
            goto label_27655c;
        }
    }
    ctx->pc = 0x27654Cu;
    // 0x27654c: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x27654cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x276550: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x276550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x276554: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x276554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x276558: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x276558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27655c:
    // 0x27655c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x27655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x276560: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x276560u;
    {
        const bool branch_taken_0x276560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276560u;
        // 0x276564: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276560) {
            ctx->pc = 0x2766A8u;
            goto label_2766a8;
        }
    }
    ctx->pc = 0x276568u;
label_276568:
    // 0x276568: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x276568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27656c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27656cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276574: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x276574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276578: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x276578u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x27657c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x27657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x276580: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x276580u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x276584: 0x27a20024  addiu       $v0, $sp, 0x24
    ctx->pc = 0x276584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x276588: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x276588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x27658c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x27658cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x276590: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276594: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x276594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276598u;
    {
        const bool branch_taken_0x276598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276598u;
        // 0x27659c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276598) {
            ctx->pc = 0x2765B4u;
            goto label_2765b4;
        }
    }
    ctx->pc = 0x2765A0u;
    // 0x2765a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2765a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2765A4u;
    SET_GPR_U32(ctx, 31, 0x2765ACu);
    ctx->pc = 0x2765A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2765A4u;
    // 0x2765a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2765A4u, 0x2765ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765ACu;
label_2765ac:
    // 0x2765ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2765ACu;
    {
        const bool branch_taken_0x2765ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765ACu;
        // 0x2765b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765ac) {
            ctx->pc = 0x2765C0u;
            goto label_2765c0;
        }
    }
    ctx->pc = 0x2765B4u;
label_2765b4:
    // 0x2765b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2765b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2765b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2765bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2765c0:
    // 0x2765c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2765c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2765c4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2765c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765c8: 0x1093000a  beq         $a0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2765C8u;
    {
        const bool branch_taken_0x2765c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x2765CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765C8u;
        // 0x2765cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765c8) {
            ctx->pc = 0x2765F4u;
            goto label_2765f4;
        }
    }
    ctx->pc = 0x2765D0u;
label_2765d0:
    // 0x2765d0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2765D0u;
    {
        const bool branch_taken_0x2765d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2765d0) {
            ctx->pc = 0x2765D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2765D0u;
            // 0x2765d4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2765ECu;
            goto label_2765ec;
        }
    }
    ctx->pc = 0x2765D8u;
    // 0x2765d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2765d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2765dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2765dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2765e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2765e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2765e4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2765e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2765e8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2765e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2765ec:
    // 0x2765ec: 0x1493fff8  bne         $a0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2765ECu;
    {
        const bool branch_taken_0x2765ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x2765F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765ECu;
        // 0x2765f0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765ec) {
            ctx->pc = 0x2765D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2765d0;
        }
    }
    ctx->pc = 0x2765F4u;
label_2765f4:
    // 0x2765f4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2765f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2765f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2765f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2765fc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2765FCu;
    {
        const bool branch_taken_0x2765fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x276600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765FCu;
        // 0x276600: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765fc) {
            ctx->pc = 0x276624u;
            goto label_276624;
        }
    }
    ctx->pc = 0x276604u;
    // 0x276604: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x276604u;
    {
        const bool branch_taken_0x276604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x276604) {
            ctx->pc = 0x276608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276604u;
            // 0x276608: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276658u;
            goto label_276658;
        }
    }
    ctx->pc = 0x27660Cu;
    // 0x27660c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x276610: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x276610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x276614: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x276614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x276618: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x276618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x27661c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27661Cu;
    {
        const bool branch_taken_0x27661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27661Cu;
        // 0x276620: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27661c) {
            ctx->pc = 0x276658u;
            goto label_276658;
        }
    }
    ctx->pc = 0x276624u;
label_276624:
    // 0x276624: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x276624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276628: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x276628u;
    {
        const bool branch_taken_0x276628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276628u;
        // 0x27662c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276628) {
            ctx->pc = 0x276650u;
            goto label_276650;
        }
    }
    ctx->pc = 0x276630u;
label_276630:
    // 0x276630: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276630u;
    {
        const bool branch_taken_0x276630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276630u;
        // 0x276634: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276630) {
            ctx->pc = 0x276648u;
            goto label_276648;
        }
    }
    ctx->pc = 0x276638u;
    // 0x276638: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x276638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27663c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27663cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x276640: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x276640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x276644: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x276644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_276648:
    // 0x276648: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x276648u;
    {
        const bool branch_taken_0x276648 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276648u;
        // 0x27664c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276648) {
            ctx->pc = 0x276630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276630;
        }
    }
    ctx->pc = 0x276650u;
label_276650:
    // 0x276650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276654: 0x0  nop
    ctx->pc = 0x276654u;
    // NOP
label_276658:
    // 0x276658: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x276658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27665c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x27665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x276660: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x276660u;
    {
        const bool branch_taken_0x276660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x276664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276660u;
        // 0x276664: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276660) {
            ctx->pc = 0x276688u;
            goto label_276688;
        }
    }
    ctx->pc = 0x276668u;
    // 0x276668: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x276668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27666c: 0x0  nop
    ctx->pc = 0x27666cu;
    // NOP
label_276670:
    // 0x276670: 0x0  nop
    ctx->pc = 0x276670u;
    // NOP
    // 0x276674: 0x0  nop
    ctx->pc = 0x276674u;
    // NOP
    // 0x276678: 0x0  nop
    ctx->pc = 0x276678u;
    // NOP
    // 0x27667c: 0x0  nop
    ctx->pc = 0x27667cu;
    // NOP
    // 0x276680: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x276680u;
    {
        const bool branch_taken_0x276680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x276684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276680u;
        // 0x276684: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276680) {
            ctx->pc = 0x276670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276670;
        }
    }
    ctx->pc = 0x276688u;
label_276688:
    // 0x276688: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276688u;
    {
        const bool branch_taken_0x276688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276688u;
        // 0x27668c: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276688) {
            ctx->pc = 0x27669Cu;
            goto label_27669c;
        }
    }
    ctx->pc = 0x276690u;
    // 0x276690: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x276690u;
    SET_GPR_U32(ctx, 31, 0x276698u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x276690u, 0x276698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276698u;
label_276698:
    // 0x276698: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x276698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_27669c:
    // 0x27669c: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x27669cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x2766a0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2766a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2766a4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2766a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2766a8:
    // 0x2766a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2766a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2766ac:
    // 0x2766ac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2766acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2766b0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2766b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2766b4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2766b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2766b8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2766b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2766bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2766bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2766c0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2766c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2766c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2766c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2766c8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2766c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2766cc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2766ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2766d0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2766d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2766d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2766D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766D4u;
        // 0x2766d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2766D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2766DCu;
    // 0x2766dc: 0x0  nop
    ctx->pc = 0x2766dcu;
    // NOP
    ctx->pc = 0x2766e0u;
}
