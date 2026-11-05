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

// Function: sub_003DC1E8
// Address: 0x3dc1e8 - 0x3dc338
void sub_003DC1E8_0x3dc1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC1E8_0x3dc1e8");
#endif

    switch (ctx->pc) {
        case 0x3dc250u: goto label_3dc250;
        case 0x3dc274u: goto label_3dc274;
        case 0x3dc288u: goto label_3dc288;
        case 0x3dc2d0u: goto label_3dc2d0;
        case 0x3dc300u: goto label_3dc300;
        default: break;
    }

    ctx->pc = 0x3dc1e8u;

    // 0x3dc1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dc1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dc1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dc1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dc1f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dc1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dc1f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dc1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc1fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dc1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc200: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3dc200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3dc204: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3dc204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3dc208: 0x12320041  beq         $s1, $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x3DC208u;
    {
        const bool branch_taken_0x3dc208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x3DC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC208u;
        // 0x3dc20c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc208) {
            ctx->pc = 0x3DC310u;
            goto label_3dc310;
        }
    }
    ctx->pc = 0x3DC210u;
    // 0x3dc210: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x3dc210u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dc214: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3dc214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dc218: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3dc218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3dc21c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3dc21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dc220: 0x2903023  subu        $a2, $s4, $s0
    ctx->pc = 0x3dc220u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3dc224: 0x69883  sra         $s3, $a2, 2
    ctx->pc = 0x3dc224u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3dc228: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3dc228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dc22c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3dc22cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3dc230: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x3dc230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3dc234: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DC234u;
    {
        const bool branch_taken_0x3dc234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc234) {
            ctx->pc = 0x3DC238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC234u;
            // 0x3dc238: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC298u;
            goto label_3dc298;
        }
    }
    ctx->pc = 0x3DC23Cu;
    // 0x3dc23c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DC23Cu;
    {
        const bool branch_taken_0x3dc23c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC23Cu;
        // 0x3dc240: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc23c) {
            ctx->pc = 0x3DC258u;
            goto label_3dc258;
        }
    }
    ctx->pc = 0x3DC244u;
    // 0x3dc244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dc244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc248: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DC248u;
    SET_GPR_U32(ctx, 31, 0x3DC250u);
    ctx->pc = 0x3DC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC248u;
    // 0x3dc24c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DC248u, 0x3DC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC250u;
label_3dc250:
    // 0x3dc250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC250u;
    {
        const bool branch_taken_0x3dc250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC250u;
        // 0x3dc254: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc250) {
            ctx->pc = 0x3DC260u;
            goto label_3dc260;
        }
    }
    ctx->pc = 0x3DC258u;
label_3dc258:
    // 0x3dc258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3dc258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc25c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3dc25cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc260:
    // 0x3dc260: 0x12900004  beq         $s4, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC260u;
    {
        const bool branch_taken_0x3dc260 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC260u;
        // 0x3dc264: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc260) {
            ctx->pc = 0x3DC274u;
            goto label_3dc274;
        }
    }
    ctx->pc = 0x3DC268u;
    // 0x3dc268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc26c: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3DC26Cu;
    SET_GPR_U32(ctx, 31, 0x3DC274u);
    ctx->pc = 0x3DC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC26Cu;
    // 0x3dc270: 0x2853023  subu        $a2, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3DC26Cu, 0x3DC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC274u;
label_3dc274:
    // 0x3dc274: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3dc274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dc278: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC278u;
    {
        const bool branch_taken_0x3dc278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC278u;
        // 0x3dc27c: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc278) {
            ctx->pc = 0x3DC28Cu;
            goto label_3dc28c;
        }
    }
    ctx->pc = 0x3DC280u;
    // 0x3dc280: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DC280u;
    SET_GPR_U32(ctx, 31, 0x3DC288u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DC280u, 0x3DC288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC288u;
label_3dc288:
    // 0x3dc288: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x3dc288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_3dc28c:
    // 0x3dc28c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3dc28cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3dc290: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3DC290u;
    {
        const bool branch_taken_0x3dc290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC290u;
        // 0x3dc294: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc290) {
            ctx->pc = 0x3DC304u;
            goto label_3dc304;
        }
    }
    ctx->pc = 0x3DC298u;
label_3dc298:
    // 0x3dc298: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3dc298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dc29c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3dc29cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3dc2a0: 0x53182b  sltu        $v1, $v0, $s3
    ctx->pc = 0x3dc2a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3dc2a4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC2A4u;
    {
        const bool branch_taken_0x3dc2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2A4u;
        // 0x3dc2a8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc2a4) {
            ctx->pc = 0x3DC2BCu;
            goto label_3dc2bc;
        }
    }
    ctx->pc = 0x3DC2ACu;
    // 0x3dc2ac: 0x12900014  beq         $s4, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DC2ACu;
    {
        const bool branch_taken_0x3dc2ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2ACu;
        // 0x3dc2b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc2ac) {
            ctx->pc = 0x3DC300u;
            goto label_3dc300;
        }
    }
    ctx->pc = 0x3DC2B4u;
    // 0x3dc2b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3DC2B4u;
    {
        const bool branch_taken_0x3dc2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc2b4) {
            ctx->pc = 0x3DC2F8u;
            goto label_3dc2f8;
        }
    }
    ctx->pc = 0x3DC2BCu;
label_3dc2bc:
    // 0x3dc2bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3dc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dc2c0: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC2C0u;
    {
        const bool branch_taken_0x3dc2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2C0u;
        // 0x3dc2c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc2c0) {
            ctx->pc = 0x3DC2D0u;
            goto label_3dc2d0;
        }
    }
    ctx->pc = 0x3DC2C8u;
    // 0x3dc2c8: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3DC2C8u;
    SET_GPR_U32(ctx, 31, 0x3DC2D0u);
    ctx->pc = 0x3DC2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC2C8u;
    // 0x3dc2cc: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3DC2C8u, 0x3DC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC2D0u;
label_3dc2d0:
    // 0x3dc2d0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3dc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3dc2d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3dc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dc2d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dc2dc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3dc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3dc2e0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3dc2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dc2e4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3dc2e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3dc2e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dc2ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3dc2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc2f0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC2F0u;
    {
        const bool branch_taken_0x3dc2f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3DC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2F0u;
        // 0x3dc2f4: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc2f0) {
            ctx->pc = 0x3DC300u;
            goto label_3dc300;
        }
    }
    ctx->pc = 0x3DC2F8u;
label_3dc2f8:
    // 0x3dc2f8: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3DC2F8u;
    SET_GPR_U32(ctx, 31, 0x3DC300u);
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3DC2F8u, 0x3DC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC300u;
label_3dc300:
    // 0x3dc300: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x3dc300u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3dc304:
    // 0x3dc304: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3dc304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dc308: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3dc308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3dc30c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3dc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3dc310:
    // 0x3dc310: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3dc310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dc318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc31c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dc31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc320: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3dc320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dc324: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3dc324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dc328: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3dc328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3dc32c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC32Cu;
        // 0x3dc330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC334u;
    // 0x3dc334: 0x0  nop
    ctx->pc = 0x3dc334u;
    // NOP
    ctx->pc = 0x3dc338u;
}
