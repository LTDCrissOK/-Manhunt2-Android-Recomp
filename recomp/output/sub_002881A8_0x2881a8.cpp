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

// Function: sub_002881A8
// Address: 0x2881a8 - 0x2882b0
void sub_002881A8_0x2881a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002881A8_0x2881a8");
#endif

    switch (ctx->pc) {
        case 0x2881d8u: goto label_2881d8;
        case 0x2881e4u: goto label_2881e4;
        case 0x288210u: goto label_288210;
        case 0x288228u: goto label_288228;
        case 0x288258u: goto label_288258;
        case 0x288270u: goto label_288270;
        case 0x288288u: goto label_288288;
        default: break;
    }

    ctx->pc = 0x2881a8u;

    // 0x2881a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2881ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2881acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2881b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2881b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2881b4: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x2881b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x2881b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2881b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2881bc: 0x26b0c690  addiu       $s0, $s5, -0x3970
    ctx->pc = 0x2881bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952592));
    // 0x2881c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2881c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2881c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2881c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2881c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2881cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2881ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2881d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2881d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2881d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2881d8:
    // 0x2881d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2881d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881dc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2881DCu;
    SET_GPR_U32(ctx, 31, 0x2881E4u);
    ctx->pc = 0x2881E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881DCu;
    // 0x2881e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2881DCu, 0x2881E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881E4u;
label_2881e4:
    // 0x2881e4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2881E4u;
    {
        const bool branch_taken_0x2881e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881E4u;
        // 0x2881e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881e4) {
            ctx->pc = 0x288240u;
            goto label_288240;
        }
    }
    ctx->pc = 0x2881ECu;
    // 0x2881ec: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x2881ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2881f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2881F0u;
    {
        const bool branch_taken_0x2881f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2881F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881F0u;
        // 0x2881f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881f0) {
            ctx->pc = 0x2881D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2881d8;
        }
    }
    ctx->pc = 0x2881F8u;
    // 0x2881f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2881f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2881fc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2881fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288200: 0x2451c690  addiu       $s1, $v0, -0x3970
    ctx->pc = 0x288200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x288204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x288204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288208u;
    {
        const bool branch_taken_0x288208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288208u;
        // 0x28820c: 0x3c140047  lui         $s4, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288208) {
            ctx->pc = 0x288214u;
            goto label_288214;
        }
    }
    ctx->pc = 0x288210u;
label_288210:
    // 0x288210: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x288210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_288214:
    // 0x288214: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x288214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x288218: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288218u;
    {
        const bool branch_taken_0x288218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288218u;
        // 0x28821c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288218) {
            ctx->pc = 0x288234u;
            goto label_288234;
        }
    }
    ctx->pc = 0x288220u;
    // 0x288220: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x288220u;
    SET_GPR_U32(ctx, 31, 0x288228u);
    ctx->pc = 0x288224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288220u;
    // 0x288224: 0x2685aab0  addiu       $a1, $s4, -0x5550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x288220u, 0x288228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288228u;
label_288228:
    // 0x288228: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x288228u;
    {
        const bool branch_taken_0x288228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288228) {
            ctx->pc = 0x28822Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288228u;
            // 0x28822c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288210;
        }
    }
    ctx->pc = 0x288230u;
    // 0x288230: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x288230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288234:
    // 0x288234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288238: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288238u;
    {
        const bool branch_taken_0x288238 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x28823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288238u;
        // 0x28823c: 0x26b0c690  addiu       $s0, $s5, -0x3970 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288238) {
            ctx->pc = 0x288248u;
            goto label_288248;
        }
    }
    ctx->pc = 0x288240u;
label_288240:
    // 0x288240: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x288240u;
    {
        const bool branch_taken_0x288240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288240u;
        // 0x288244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288240) {
            ctx->pc = 0x28828Cu;
            goto label_28828c;
        }
    }
    ctx->pc = 0x288248u;
label_288248:
    // 0x288248: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x288248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28824c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x28824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x288250: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x288250u;
    SET_GPR_U32(ctx, 31, 0x288258u);
    ctx->pc = 0x288254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288250u;
    // 0x288254: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x288250u, 0x288258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288258u;
label_288258:
    // 0x288258: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x288258u;
    {
        const bool branch_taken_0x288258 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288258u;
        // 0x28825c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288258) {
            ctx->pc = 0x28827Cu;
            goto label_28827c;
        }
    }
    ctx->pc = 0x288260u;
    // 0x288260: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x288260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288264: 0x24844ed8  addiu       $a0, $a0, 0x4ED8
    ctx->pc = 0x288264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
    // 0x288268: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x288268u;
    SET_GPR_U32(ctx, 31, 0x288270u);
    ctx->pc = 0x28826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288268u;
    // 0x28826c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x288268u, 0x288270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288270u;
label_288270:
    // 0x288270: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x288270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x288274: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x288274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x288278: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x288278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_28827c:
    // 0x28827c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28827cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288280: 0xc0a20ac  jal         func_2882B0
    ctx->pc = 0x288280u;
    SET_GPR_U32(ctx, 31, 0x288288u);
    ctx->pc = 0x288284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288280u;
    // 0x288284: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2882B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2882B0u, 0x288280u, 0x288288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288288u;
label_288288:
    // 0x288288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28828c:
    // 0x28828c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28828cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x288290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x288294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288298: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x288298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28829c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28829cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2882a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2882a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2882a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2882a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2882a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2882A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2882ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882A8u;
        // 0x2882ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2882A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2882B0u;
}
