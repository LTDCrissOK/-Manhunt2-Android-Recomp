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

// Function: sub_001EEBC8
// Address: 0x1eebc8 - 0x1eecf0
void sub_001EEBC8_0x1eebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEBC8_0x1eebc8");
#endif

    switch (ctx->pc) {
        case 0x1eecc0u: goto label_1eecc0;
        case 0x1eece0u: goto label_1eece0;
        default: break;
    }

    ctx->pc = 0x1eebc8u;

    // 0x1eebc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eebcc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1eebccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1eebd0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1eebd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eebd8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1eebd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1eebdc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eebdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebe0: 0x28e20021  slti        $v0, $a3, 0x21
    ctx->pc = 0x1eebe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1eebe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEBE4u;
    {
        const bool branch_taken_0x1eebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBE4u;
        // 0x1eebe8: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebe4) {
            ctx->pc = 0x1EEC08u;
            goto label_1eec08;
        }
    }
    ctx->pc = 0x1EEBECu;
    // 0x1eebec: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x1eebecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1eebf0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEBF0u;
    {
        const bool branch_taken_0x1eebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBF0u;
        // 0x1eebf4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebf0) {
            ctx->pc = 0x1EEC1Cu;
            goto label_1eec1c;
        }
    }
    ctx->pc = 0x1EEBF8u;
    // 0x1eebf8: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EEBF8u;
    {
        const bool branch_taken_0x1eebf8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEBF8u;
        // 0x1eebfc: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eebf8) {
            ctx->pc = 0x1EEC28u;
            goto label_1eec28;
        }
    }
    ctx->pc = 0x1EEC00u;
    // 0x1eec00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EEC00u;
    {
        const bool branch_taken_0x1eec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec00) {
            ctx->pc = 0x1EEC34u;
            goto label_1eec34;
        }
    }
    ctx->pc = 0x1EEC08u;
label_1eec08:
    // 0x1eec08: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1eec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1eec0c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEC0Cu;
    {
        const bool branch_taken_0x1eec0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC0Cu;
        // 0x1eec10: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec0c) {
            ctx->pc = 0x1EEC28u;
            goto label_1eec28;
        }
    }
    ctx->pc = 0x1EEC14u;
    // 0x1eec14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEC14u;
    {
        const bool branch_taken_0x1eec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec14) {
            ctx->pc = 0x1EEC34u;
            goto label_1eec34;
        }
    }
    ctx->pc = 0x1EEC1Cu;
label_1eec1c:
    // 0x1eec1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEC20u;
    {
        const bool branch_taken_0x1eec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC20u;
        // 0x1eec24: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec20) {
            ctx->pc = 0x1EEC30u;
            goto label_1eec30;
        }
    }
    ctx->pc = 0x1EEC28u;
label_1eec28:
    // 0x1eec28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eec28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec2c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1eec30:
    // 0x1eec30: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1eec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1eec34:
    // 0x1eec34: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EEC34u;
    {
        const bool branch_taken_0x1eec34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EEC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC34u;
        // 0x1eec38: 0x2902001e  slti        $v0, $t0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec34) {
            ctx->pc = 0x1EEC80u;
            goto label_1eec80;
        }
    }
    ctx->pc = 0x1EEC3Cu;
    // 0x1eec3c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EEC3Cu;
    {
        const bool branch_taken_0x1eec3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC3Cu;
        // 0x1eec40: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec3c) {
            ctx->pc = 0x1EEC78u;
            goto label_1eec78;
        }
    }
    ctx->pc = 0x1EEC44u;
    // 0x1eec44: 0x29020021  slti        $v0, $t0, 0x21
    ctx->pc = 0x1eec44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1eec48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEC48u;
    {
        const bool branch_taken_0x1eec48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec48) {
            ctx->pc = 0x1EEC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEC48u;
            // 0x1eec4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEC64u;
            goto label_1eec64;
        }
    }
    ctx->pc = 0x1EEC50u;
    // 0x1eec50: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1eec54: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEC54u;
    {
        const bool branch_taken_0x1eec54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC54u;
        // 0x1eec58: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec54) {
            ctx->pc = 0x1EEC6Cu;
            goto label_1eec6c;
        }
    }
    ctx->pc = 0x1EEC5Cu;
    // 0x1eec5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEC5Cu;
    {
        const bool branch_taken_0x1eec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec5c) {
            ctx->pc = 0x1EEC78u;
            goto label_1eec78;
        }
    }
    ctx->pc = 0x1EEC64u;
label_1eec64:
    // 0x1eec64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEC64u;
    {
        const bool branch_taken_0x1eec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC64u;
        // 0x1eec68: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec64) {
            ctx->pc = 0x1EEC74u;
            goto label_1eec74;
        }
    }
    ctx->pc = 0x1EEC6Cu;
label_1eec6c:
    // 0x1eec6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eec6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec70: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1eec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1eec74:
    // 0x1eec74: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1eec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1eec78:
    // 0x1eec78: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEC78u;
    {
        const bool branch_taken_0x1eec78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC78u;
        // 0x1eec7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec78) {
            ctx->pc = 0x1EECE4u;
            goto label_1eece4;
        }
    }
    ctx->pc = 0x1EEC80u;
label_1eec80:
    // 0x1eec80: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1eec80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1eec84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eec84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec88: 0x0  nop
    ctx->pc = 0x1eec88u;
    // NOP
    // 0x1eec8c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1eec8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eec90: 0x0  nop
    ctx->pc = 0x1eec90u;
    // NOP
    // 0x1eec94: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1EEC94u;
    {
        const bool branch_taken_0x1eec94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC94u;
        // 0x1eec98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec94) {
            ctx->pc = 0x1EECE4u;
            goto label_1eece4;
        }
    }
    ctx->pc = 0x1EEC9Cu;
    // 0x1eec9c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEC9Cu;
    {
        const bool branch_taken_0x1eec9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec9c) {
            ctx->pc = 0x1EECC8u;
            goto label_1eecc8;
        }
    }
    ctx->pc = 0x1EECA4u;
    // 0x1eeca4: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1EECA4u;
    {
        const bool branch_taken_0x1eeca4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECA4u;
        // 0x1eeca8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeca4) {
            ctx->pc = 0x1EECE4u;
            goto label_1eece4;
        }
    }
    ctx->pc = 0x1EECACu;
    // 0x1eecac: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1eecacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecb0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1eecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x1eecb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eecb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eecb8: 0xc046642  jal         func_119908
    ctx->pc = 0x1EECB8u;
    SET_GPR_U32(ctx, 31, 0x1EECC0u);
    ctx->pc = 0x1EECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EECB8u;
    // 0x1eecbc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1EECB8u, 0x1EECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECC0u;
label_1eecc0:
    // 0x1eecc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EECC0u;
    {
        const bool branch_taken_0x1eecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECC0u;
        // 0x1eecc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecc0) {
            ctx->pc = 0x1EECE4u;
            goto label_1eece4;
        }
    }
    ctx->pc = 0x1EECC8u;
label_1eecc8:
    // 0x1eecc8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EECC8u;
    {
        const bool branch_taken_0x1eecc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECC8u;
        // 0x1eeccc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecc8) {
            ctx->pc = 0x1EECE0u;
            goto label_1eece0;
        }
    }
    ctx->pc = 0x1EECD0u;
    // 0x1eecd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eecd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eecd4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1eecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x1eecd8: 0xc046642  jal         func_119908
    ctx->pc = 0x1EECD8u;
    SET_GPR_U32(ctx, 31, 0x1EECE0u);
    ctx->pc = 0x1EECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EECD8u;
    // 0x1eecdc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1EECD8u, 0x1EECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECE0u;
label_1eece0:
    // 0x1eece0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eece0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eece4:
    // 0x1eece4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECE4u;
        // 0x1eece8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EECE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EECECu;
    // 0x1eecec: 0x0  nop
    ctx->pc = 0x1eececu;
    // NOP
    ctx->pc = 0x1eecf0u;
}
