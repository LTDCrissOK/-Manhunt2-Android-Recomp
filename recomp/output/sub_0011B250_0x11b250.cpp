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

// Function: sub_0011B250
// Address: 0x11b250 - 0x11b360
void sub_0011B250_0x11b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B250_0x11b250");
#endif

    switch (ctx->pc) {
        case 0x11b294u: goto label_11b294;
        case 0x11b2b8u: goto label_11b2b8;
        case 0x11b324u: goto label_11b324;
        default: break;
    }

    ctx->pc = 0x11b250u;

    // 0x11b250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b25c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b260: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11b260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11b264: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11b264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b268: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11b26c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x11b26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b274: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11b278: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x11b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x11b27c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x11b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x11b280: 0x92221213  lbu         $v0, 0x1213($s1)
    ctx->pc = 0x11b280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4627)));
    // 0x11b284: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B284u;
    {
        const bool branch_taken_0x11b284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B284u;
        // 0x11b288: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b284) {
            ctx->pc = 0x11B29Cu;
            goto label_11b29c;
        }
    }
    ctx->pc = 0x11B28Cu;
    // 0x11b28c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11B28Cu;
    {
        const bool branch_taken_0x11b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B28Cu;
        // 0x11b290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b28c) {
            ctx->pc = 0x11B338u;
            goto label_11b338;
        }
    }
    ctx->pc = 0x11B294u;
label_11b294:
    // 0x11b294: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x11B294u;
    {
        const bool branch_taken_0x11b294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B294u;
        // 0x11b298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b294) {
            ctx->pc = 0x11B338u;
            goto label_11b338;
        }
    }
    ctx->pc = 0x11B29Cu;
label_11b29c:
    // 0x11b29c: 0x92331213  lbu         $s3, 0x1213($s1)
    ctx->pc = 0x11b29cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4627)));
    // 0x11b2a0: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x11B2A0u;
    {
        const bool branch_taken_0x11b2a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2A0u;
        // 0x11b2a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2a0) {
            ctx->pc = 0x11B334u;
            goto label_11b334;
        }
    }
    ctx->pc = 0x11B2A8u;
    // 0x11b2a8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x11b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x11b2ac: 0x24569b10  addiu       $s6, $v0, -0x64F0
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x11b2b0: 0x92221211  lbu         $v0, 0x1211($s1)
    ctx->pc = 0x11b2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4625)));
    // 0x11b2b4: 0x0  nop
    ctx->pc = 0x11b2b4u;
    // NOP
label_11b2b8:
    // 0x11b2b8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x11b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11b2bc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11b2c0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11b2c4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x11b2c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11b2c8: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x11b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x11b2cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11b2d0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x11b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11b2d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b2d8: 0x14750014  bne         $v1, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B2D8u;
    {
        const bool branch_taken_0x11b2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x11B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2D8u;
        // 0x11b2dc: 0x213102b  sltu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2d8) {
            ctx->pc = 0x11B32Cu;
            goto label_11b32c;
        }
    }
    ctx->pc = 0x11B2E0u;
    // 0x11b2e0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x11b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x11b2e4: 0x14540011  bne         $v0, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B2E4u;
    {
        const bool branch_taken_0x11b2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x11B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E4u;
        // 0x11b2e8: 0x213102b  sltu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2e4) {
            ctx->pc = 0x11B32Cu;
            goto label_11b32c;
        }
    }
    ctx->pc = 0x11B2ECu;
    // 0x11b2ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11b2f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11b2f4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x11b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x11b2f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b2fc: 0x1472000b  bne         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11B2FCu;
    {
        const bool branch_taken_0x11b2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x11B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2FCu;
        // 0x11b300: 0x213102b  sltu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2fc) {
            ctx->pc = 0x11B32Cu;
            goto label_11b32c;
        }
    }
    ctx->pc = 0x11B304u;
    // 0x11b304: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x11b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x11b308: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x11b308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b30c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x11b30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x11b310: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x11b310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x11b314: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11b314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b318: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11b318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b31c: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x11B31Cu;
    SET_GPR_U32(ctx, 31, 0x11B324u);
    ctx->pc = 0x11B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B31Cu;
    // 0x11b320: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x11B31Cu, 0x11B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B324u;
label_11b324:
    // 0x11b324: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x11B324u;
    {
        const bool branch_taken_0x11b324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B324u;
        // 0x11b328: 0x213102b  sltu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b324) {
            ctx->pc = 0x11B294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b294;
        }
    }
    ctx->pc = 0x11B32Cu;
label_11b32c:
    // 0x11b32c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x11B32Cu;
    {
        const bool branch_taken_0x11b32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b32c) {
            ctx->pc = 0x11B330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B32Cu;
            // 0x11b330: 0x92221211  lbu         $v0, 0x1211($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2b8;
        }
    }
    ctx->pc = 0x11B334u;
label_11b334:
    // 0x11b334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b338:
    // 0x11b338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b33c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b340: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b344: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11b344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b348: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11b348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b34c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11b34cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11b350: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x11b350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b354: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x11b354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11b358: 0x3e00008  jr          $ra
    ctx->pc = 0x11B358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B358u;
        // 0x11b35c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B360u;
}
