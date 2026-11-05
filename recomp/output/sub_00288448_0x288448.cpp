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

// Function: sub_00288448
// Address: 0x288448 - 0x2884e8
void sub_00288448_0x288448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288448_0x288448");
#endif

    switch (ctx->pc) {
        case 0x288480u: goto label_288480;
        case 0x28848cu: goto label_28848c;
        case 0x2884acu: goto label_2884ac;
        default: break;
    }

    ctx->pc = 0x288448u;

    // 0x288448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28844c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28844cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x288450: 0x2442c690  addiu       $v0, $v0, -0x3970
    ctx->pc = 0x288450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x288454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288458: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x288458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28845c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28845cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288460: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x288460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x288464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288468: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x288468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28846c: 0x24520060  addiu       $s2, $v0, 0x60
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x288470: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x288470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x288474: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x288474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288478: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x288478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x28847c: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x28847cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
label_288480:
    // 0x288480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288484: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x288484u;
    SET_GPR_U32(ctx, 31, 0x28848Cu);
    ctx->pc = 0x288488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288484u;
    // 0x288488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x288484u, 0x28848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28848Cu;
label_28848c:
    // 0x28848c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28848Cu;
    {
        const bool branch_taken_0x28848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28848c) {
            ctx->pc = 0x288490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28848Cu;
            // 0x288490: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2884B4u;
            goto label_2884b4;
        }
    }
    ctx->pc = 0x288494u;
    // 0x288494: 0x9282aab0  lbu         $v0, -0x5550($s4)
    ctx->pc = 0x288494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294945456)));
    // 0x288498: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28849c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28849cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2884a0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2884a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2884a4: 0xc0a20ac  jal         func_2882B0
    ctx->pc = 0x2884A4u;
    SET_GPR_U32(ctx, 31, 0x2884ACu);
    ctx->pc = 0x2884A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884A4u;
    // 0x2884a8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2882B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2882B0u, 0x2884A4u, 0x2884ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884ACu;
label_2884ac:
    // 0x2884ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2884ACu;
    {
        const bool branch_taken_0x2884ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884ACu;
        // 0x2884b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884ac) {
            ctx->pc = 0x2884C8u;
            goto label_2884c8;
        }
    }
    ctx->pc = 0x2884B4u;
label_2884b4:
    // 0x2884b4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2884b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2884b8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2884b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2884bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2884BCu;
    {
        const bool branch_taken_0x2884bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2884C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884BCu;
        // 0x2884c0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884bc) {
            ctx->pc = 0x288480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288480;
        }
    }
    ctx->pc = 0x2884C4u;
    // 0x2884c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2884c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2884c8:
    // 0x2884c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2884c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2884cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2884ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2884d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2884d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2884d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2884d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2884d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2884d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2884dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2884DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2884E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884DCu;
        // 0x2884e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2884DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2884E4u;
    // 0x2884e4: 0x0  nop
    ctx->pc = 0x2884e4u;
    // NOP
    ctx->pc = 0x2884e8u;
}
