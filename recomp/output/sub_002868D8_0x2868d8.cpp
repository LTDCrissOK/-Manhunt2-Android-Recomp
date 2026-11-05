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

// Function: sub_002868D8
// Address: 0x2868d8 - 0x286978
void sub_002868D8_0x2868d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002868D8_0x2868d8");
#endif

    switch (ctx->pc) {
        case 0x286908u: goto label_286908;
        case 0x286920u: goto label_286920;
        case 0x28693cu: goto label_28693c;
        default: break;
    }

    ctx->pc = 0x2868d8u;

    // 0x2868d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2868d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2868dc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2868dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2868e0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2868e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2868e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2868e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2868e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2868e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2868ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2868f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2868f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2868f4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2868f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2868f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2868f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2868fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2868fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286900: 0xc0a19b0  jal         func_2866C0
    ctx->pc = 0x286900u;
    SET_GPR_U32(ctx, 31, 0x286908u);
    ctx->pc = 0x286904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286900u;
    // 0x286904: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2866C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2866C0u, 0x286900u, 0x286908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286908u;
label_286908:
    // 0x286908: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286908u;
    {
        const bool branch_taken_0x286908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286908u;
        // 0x28690c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286908) {
            ctx->pc = 0x286924u;
            goto label_286924;
        }
    }
    ctx->pc = 0x286910u;
    // 0x286910: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x286910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286914: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x286914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x286918: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x286918u;
    SET_GPR_U32(ctx, 31, 0x286920u);
    ctx->pc = 0x28691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286918u;
    // 0x28691c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x286918u, 0x286920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286920u;
label_286920:
    // 0x286920: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x286920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_286924:
    // 0x286924: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x286924u;
    {
        const bool branch_taken_0x286924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286924u;
        // 0x286928: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286924) {
            ctx->pc = 0x28695Cu;
            goto label_28695c;
        }
    }
    ctx->pc = 0x28692Cu;
    // 0x28692c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28692cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286930: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x286930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x286934: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x286934u;
    SET_GPR_U32(ctx, 31, 0x28693Cu);
    ctx->pc = 0x286938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286934u;
    // 0x286938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x286934u, 0x28693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28693Cu;
label_28693c:
    // 0x28693c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28693cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x286940: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x286940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x286944: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x286944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286948: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286948u;
    {
        const bool branch_taken_0x286948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x286948) {
            ctx->pc = 0x28694Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286948u;
            // 0x28694c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286960u;
            goto label_286960;
        }
    }
    ctx->pc = 0x286950u;
    // 0x286950: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286954: 0x2442a4b8  addiu       $v0, $v0, -0x5B48
    ctx->pc = 0x286954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943928));
    // 0x286958: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x286958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28695c:
    // 0x28695c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28695cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286960:
    // 0x286960: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x286960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286964: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x286964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286968: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x286968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28696c: 0x3e00008  jr          $ra
    ctx->pc = 0x28696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28696Cu;
        // 0x286970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286974u;
    // 0x286974: 0x0  nop
    ctx->pc = 0x286974u;
    // NOP
    ctx->pc = 0x286978u;
}
