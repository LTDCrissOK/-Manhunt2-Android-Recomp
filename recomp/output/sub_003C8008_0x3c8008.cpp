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

// Function: sub_003C8008
// Address: 0x3c8008 - 0x3c81a0
void sub_003C8008_0x3c8008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8008_0x3c8008");
#endif

    switch (ctx->pc) {
        case 0x3c8048u: goto label_3c8048;
        default: break;
    }

    ctx->pc = 0x3c8008u;

    // 0x3c8008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c8008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c800c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c8010: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c8010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c8014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c8014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8018: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c8018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c801c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c8020: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x3c8020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3c8024: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c8024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c8028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c8028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c802c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3c802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c8030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c8030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c8034: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x3c8034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3c8038: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3c8038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3c803c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x3c803cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c8040: 0xc0f1dda  jal         func_3C7768
    ctx->pc = 0x3C8040u;
    SET_GPR_U32(ctx, 31, 0x3C8048u);
    ctx->pc = 0x3C8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8040u;
    // 0x3c8044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7768u, 0x3C8040u, 0x3C8048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8048u;
label_3c8048:
    // 0x3c8048: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c8048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c804c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3c804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3c8050: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x3c8050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x3c8054: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3c8054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3c8058: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3C8058u;
    {
        const bool branch_taken_0x3c8058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8058u;
        // 0x3c805c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8058) {
            ctx->pc = 0x3C80C8u;
            goto label_3c80c8;
        }
    }
    ctx->pc = 0x3C8060u;
    // 0x3c8060: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3c8060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3c8064: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x3c8064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x3c8068: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3c8068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3c806c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c8070: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c8070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c8074: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x3c8074u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c8078: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x3c8078u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3c807c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3c807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3c8080: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x3c8080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3c8084: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8088: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3c8088u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3c808c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C808Cu;
    {
        const bool branch_taken_0x3c808c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C808Cu;
        // 0x3c8090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c808c) {
            ctx->pc = 0x3C8098u;
            goto label_3c8098;
        }
    }
    ctx->pc = 0x3C8094u;
    // 0x3c8094: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x3c8094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3c8098:
    // 0x3c8098: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3c8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3c809c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x3c809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x3c80a0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3c80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3c80a4: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x3c80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x3c80a8: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x3c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c80ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c80acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c80b0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c80b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c80b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c80b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c80b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c80bc: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3c80bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3c80c0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3C80C0u;
    {
        const bool branch_taken_0x3c80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80C0u;
        // 0x3c80c4: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c80c0) {
            ctx->pc = 0x3C8178u;
            goto label_3c8178;
        }
    }
    ctx->pc = 0x3C80C8u;
label_3c80c8:
    // 0x3c80c8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3c80c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3c80cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C80CCu;
    {
        const bool branch_taken_0x3c80cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80CCu;
        // 0x3c80d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c80cc) {
            ctx->pc = 0x3C80DCu;
            goto label_3c80dc;
        }
    }
    ctx->pc = 0x3C80D4u;
    // 0x3c80d4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3c80d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3c80d8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3c80d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c80dc:
    // 0x3c80dc: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x3c80dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x3c80e0: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C80E0u;
    {
        const bool branch_taken_0x3c80e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C80E0u;
        // 0x3c80e4: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c80e0) {
            ctx->pc = 0x3C8148u;
            goto label_3c8148;
        }
    }
    ctx->pc = 0x3C80E8u;
    // 0x3c80e8: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x3c80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x3c80ec: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3c80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c80f0: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x3c80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c80f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3c80f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3c80f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c80fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3c80fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3c8100: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c8100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c8104: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3c8104u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3c8108: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c8108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c810c: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3c810cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3c8110: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3c8110u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3c8114: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C8114u;
    {
        const bool branch_taken_0x3c8114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8114u;
        // 0x3c8118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8114) {
            ctx->pc = 0x3C8120u;
            goto label_3c8120;
        }
    }
    ctx->pc = 0x3C811Cu;
    // 0x3c811c: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x3c811cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3c8120:
    // 0x3c8120: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3c8120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3c8124: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x3c8124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c8128: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x3c8128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c812c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c812cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c8130: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c8130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c8134: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c8138: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3c8138u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3c813c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c813cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c8140: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C8140u;
    {
        const bool branch_taken_0x3c8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8140u;
        // 0x3c8144: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8140) {
            ctx->pc = 0x3C8178u;
            goto label_3c8178;
        }
    }
    ctx->pc = 0x3C8148u;
label_3c8148:
    // 0x3c8148: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x3c8148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x3c814c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c8150: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c8150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c8154: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x3c8154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x3c8158: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x3c8158u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3c815c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c815cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8160: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3c8160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3c8164: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3c8164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3c8168: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c8168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c816c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c816cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c8170: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c8170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c8174: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3c8174u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_3c8178:
    // 0x3c8178: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3c8178u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3c817c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c817cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8180: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c8180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c8184: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c8184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c8188: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c8188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c818c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c818cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c8190: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c8190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c8194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8198: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8198u;
        // 0x3c819c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C81A0u;
}
