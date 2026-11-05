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

// Function: sub_002CEFB8
// Address: 0x2cefb8 - 0x2cf1b8
void sub_002CEFB8_0x2cefb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEFB8_0x2cefb8");
#endif

    switch (ctx->pc) {
        case 0x2ceff0u: goto label_2ceff0;
        case 0x2cf004u: goto label_2cf004;
        case 0x2cf014u: goto label_2cf014;
        case 0x2cf038u: goto label_2cf038;
        case 0x2cf0e8u: goto label_2cf0e8;
        case 0x2cf0f8u: goto label_2cf0f8;
        case 0x2cf124u: goto label_2cf124;
        case 0x2cf17cu: goto label_2cf17c;
        case 0x2cf184u: goto label_2cf184;
        default: break;
    }

    ctx->pc = 0x2cefb8u;

    // 0x2cefb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cefb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cefbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cefbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cefc0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2cefc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2cefc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cefc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cefc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cefcc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2cefccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cefd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cefd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cefd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cefd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cefd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cefd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cefdc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cefdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cefe0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cefe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cefe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cefe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cefe8: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CEFE8u;
    SET_GPR_U32(ctx, 31, 0x2CEFF0u);
    ctx->pc = 0x2CEFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEFE8u;
    // 0x2cefec: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CEFE8u, 0x2CEFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEFF0u;
label_2ceff0:
    // 0x2ceff0: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x2ceff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2ceff4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEFF4u;
    {
        const bool branch_taken_0x2ceff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFF4u;
        // 0x2ceff8: 0x3c040047  lui         $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceff4) {
            ctx->pc = 0x2CF00Cu;
            goto label_2cf00c;
        }
    }
    ctx->pc = 0x2CEFFCu;
    // 0x2ceffc: 0xc0b365e  jal         func_2CD978
    ctx->pc = 0x2CEFFCu;
    SET_GPR_U32(ctx, 31, 0x2CF004u);
    ctx->pc = 0x2CF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEFFCu;
    // 0x2cf000: 0x24840ae0  addiu       $a0, $a0, 0xAE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD978u, 0x2CEFFCu, 0x2CF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF004u;
label_2cf004:
    // 0x2cf004: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2CF004u;
    {
        const bool branch_taken_0x2cf004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF004u;
        // 0x2cf008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf004) {
            ctx->pc = 0x2CF188u;
            goto label_2cf188;
        }
    }
    ctx->pc = 0x2CF00Cu;
label_2cf00c:
    // 0x2cf00c: 0xc0b3afe  jal         func_2CEBF8
    ctx->pc = 0x2CF00Cu;
    SET_GPR_U32(ctx, 31, 0x2CF014u);
    ctx->pc = 0x2CF010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF00Cu;
    // 0x2cf010: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBF8u, 0x2CF00Cu, 0x2CF014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF014u;
label_2cf014:
    // 0x2cf014: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2cf014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf018: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cf018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf01c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x2cf01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x2cf020: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x2cf020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x2cf024: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2cf024u;
    SET_GPR_S32(ctx, 21, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u)); // MMIO: 0x1000b400
    // 0x2cf028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cf028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf02c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf02cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u)); // MMIO: 0x1000b410
    // 0x2cf030: 0xc0b3ad0  jal         func_2CEB40
    ctx->pc = 0x2CF030u;
    SET_GPR_U32(ctx, 31, 0x2CF038u);
    ctx->pc = 0x2CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEB40u, 0x2CF030u, 0x2CF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF038u;
label_2cf038:
    // 0x2cf038: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x2cf038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cf03c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cf03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf040: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2cf040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cf044: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2cf044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2cf048: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF048u;
    {
        const bool branch_taken_0x2cf048 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf048) {
            ctx->pc = 0x2CF04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF048u;
            // 0x2cf04c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF050u;
            goto label_2cf050;
        }
    }
    ctx->pc = 0x2CF050u;
label_2cf050:
    // 0x2cf050: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf054: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x2cf054u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf058: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cf058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2cf05c: 0x2010  mfhi        $a0
    ctx->pc = 0x2cf05cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cf060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf064: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cf068: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x2cf068u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf06c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2cf06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2cf070: 0x2810  mfhi        $a1
    ctx->pc = 0x2cf070u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cf074: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x2cf074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cf078: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x2cf078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
    // 0x2cf07c: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x2cf07cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf080: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2cf080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2cf084: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x2cf084u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cf088: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x2cf088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x2cf08c: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x2cf08cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2cf090: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x2cf090u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x2cf094: 0x1322c0  sll         $a0, $s3, 11
    ctx->pc = 0x2cf094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    // 0x2cf098: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2cf098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf09c: 0x8010  mfhi        $s0
    ctx->pc = 0x2cf09cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2cf0a0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CF0A0u;
    {
        const bool branch_taken_0x2cf0a0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2CF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0A0u;
        // 0x2cf0a4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0a0) {
            ctx->pc = 0x2CF0E8u;
            goto label_2cf0e8;
        }
    }
    ctx->pc = 0x2CF0A8u;
    // 0x2cf0a8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2cf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2cf0ac: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF0ACu;
    {
        const bool branch_taken_0x2cf0ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf0ac) {
            ctx->pc = 0x2CF0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF0ACu;
            // 0x2cf0b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF0B4u;
            goto label_2cf0b4;
        }
    }
    ctx->pc = 0x2CF0B4u;
label_2cf0b4:
    // 0x2cf0b4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2cf0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2cf0b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cf0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cf0bc: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x2cf0bcu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf0c0: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2cf0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cf0c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2cf0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf0c8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2cf0cc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2cf0ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf0d0: 0x2010  mfhi        $a0
    ctx->pc = 0x2cf0d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cf0d4: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x2cf0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x2cf0d8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2cf0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2cf0dc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cf0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf0e0: 0xc0b3b1a  jal         func_2CEC68
    ctx->pc = 0x2CF0E0u;
    SET_GPR_U32(ctx, 31, 0x2CF0E8u);
    ctx->pc = 0x2CF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0E0u;
    // 0x2cf0e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEC68u, 0x2CF0E0u, 0x2CF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0E8u;
label_2cf0e8:
    // 0x2cf0e8: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CF0E8u;
    {
        const bool branch_taken_0x2cf0e8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2CF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0E8u;
        // 0x2cf0ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0e8) {
            ctx->pc = 0x2CF14Cu;
            goto label_2cf14c;
        }
    }
    ctx->pc = 0x2CF0F0u;
    // 0x2cf0f0: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x2cf0f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2cf0f4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2cf0f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cf0f8:
    // 0x2cf0f8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2cf0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cf0fc: 0x2343826  xor         $a3, $s1, $s4
    ctx->pc = 0x2cf0fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 20));
    // 0x2cf100: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cf100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cf104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cf104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf108: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2cf108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2cf10c: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x2cf10cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x2cf110: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x2cf110u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x2cf114: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf118: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2cf118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cf11c: 0xc0b3b1a  jal         func_2CEC68
    ctx->pc = 0x2CF11Cu;
    SET_GPR_U32(ctx, 31, 0x2CF124u);
    ctx->pc = 0x2CF120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF11Cu;
    // 0x2cf120: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEC68u, 0x2CF11Cu, 0x2CF124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF124u;
label_2cf124:
    // 0x2cf124: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cf128: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2cf128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cf12c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2cf12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cf130: 0x233282a  slt         $a1, $s1, $s3
    ctx->pc = 0x2cf130u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2cf134: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2cf134u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf138: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF138u;
    {
        const bool branch_taken_0x2cf138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf138) {
            ctx->pc = 0x2CF13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF138u;
            // 0x2cf13c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF140u;
            goto label_2cf140;
        }
    }
    ctx->pc = 0x2CF140u;
label_2cf140:
    // 0x2cf140: 0x2010  mfhi        $a0
    ctx->pc = 0x2cf140u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cf144: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2CF144u;
    {
        const bool branch_taken_0x2cf144 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF144u;
        // 0x2cf148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf144) {
            ctx->pc = 0x2CF0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf0f8;
        }
    }
    ctx->pc = 0x2CF14Cu;
label_2cf14c:
    // 0x2cf14c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cf14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2cf150: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2cf150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2cf154: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF154u;
    {
        const bool branch_taken_0x2cf154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF154u;
        // 0x2cf158: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf154) {
            ctx->pc = 0x2CF17Cu;
            goto label_2cf17c;
        }
    }
    ctx->pc = 0x2CF15Cu;
    // 0x2cf15c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF15Cu;
    {
        const bool branch_taken_0x2cf15c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF15Cu;
        // 0x2cf160: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf15c) {
            ctx->pc = 0x2CF174u;
            goto label_2cf174;
        }
    }
    ctx->pc = 0x2CF164u;
    // 0x2cf164: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2cf164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2cf168: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cf168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cf16c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x2cf16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x2cf170: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x2cf170u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2cf174:
    // 0x2cf174: 0xc0b3afe  jal         func_2CEBF8
    ctx->pc = 0x2CF174u;
    SET_GPR_U32(ctx, 31, 0x2CF17Cu);
    ctx->pc = 0x2CF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF174u;
    // 0x2cf178: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBF8u, 0x2CF174u, 0x2CF17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF17Cu;
label_2cf17c:
    // 0x2cf17c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CF17Cu;
    SET_GPR_U32(ctx, 31, 0x2CF184u);
    ctx->pc = 0x2CF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF17Cu;
    // 0x2cf180: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CF17Cu, 0x2CF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF184u;
label_2cf184:
    // 0x2cf184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf188:
    // 0x2cf188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf18c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cf194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf198: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cf198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf19c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cf19cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cf1a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cf1a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf1a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2cf1a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cf1a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cf1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF1ACu;
        // 0x2cf1b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF1B4u;
    // 0x2cf1b4: 0x0  nop
    ctx->pc = 0x2cf1b4u;
    // NOP
    ctx->pc = 0x2cf1b8u;
}
