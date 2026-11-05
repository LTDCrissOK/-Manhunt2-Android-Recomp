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

// Function: sub_00158238
// Address: 0x158238 - 0x158330
void sub_00158238_0x158238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158238_0x158238");
#endif

    switch (ctx->pc) {
        case 0x158270u: goto label_158270;
        case 0x158290u: goto label_158290;
        case 0x1582a4u: goto label_1582a4;
        case 0x1582c8u: goto label_1582c8;
        case 0x1582d8u: goto label_1582d8;
        case 0x1582e8u: goto label_1582e8;
        default: break;
    }

    ctx->pc = 0x158238u;

    // 0x158238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15823c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15824c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15824cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158250: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x158250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x158254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x158254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158258: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x158258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15825c: 0x24130011  addiu       $s3, $zero, 0x11
    ctx->pc = 0x15825cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158260: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x158260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x158264: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x158264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x158268: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x158268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15826c: 0x0  nop
    ctx->pc = 0x15826cu;
    // NOP
label_158270:
    // 0x158270: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x158270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x158278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15827c: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x15827Cu;
    {
        const bool branch_taken_0x15827c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15827Cu;
        // 0x158280: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15827c) {
            ctx->pc = 0x1582FCu;
            goto label_1582fc;
        }
    }
    ctx->pc = 0x158284u;
    // 0x158284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158288: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x158288u;
    SET_GPR_U32(ctx, 31, 0x158290u);
    ctx->pc = 0x15828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158288u;
    // 0x15828c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x158288u, 0x158290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158290u;
label_158290:
    // 0x158290: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x158290u;
    {
        const bool branch_taken_0x158290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158290u;
        // 0x158294: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158290) {
            ctx->pc = 0x1582ECu;
            goto label_1582ec;
        }
    }
    ctx->pc = 0x158298u;
    // 0x158298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15829c: 0xc04f452  jal         func_13D148
    ctx->pc = 0x15829Cu;
    SET_GPR_U32(ctx, 31, 0x1582A4u);
    ctx->pc = 0x1582A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15829Cu;
    // 0x1582a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x15829Cu, 0x1582A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582A4u;
label_1582a4:
    // 0x1582a4: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x1582a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1582a8: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1582A8u;
    {
        const bool branch_taken_0x1582a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1582a8) {
            ctx->pc = 0x1582C0u;
            goto label_1582c0;
        }
    }
    ctx->pc = 0x1582B0u;
    // 0x1582b0: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1582B0u;
    {
        const bool branch_taken_0x1582b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1582b0) {
            ctx->pc = 0x1582D0u;
            goto label_1582d0;
        }
    }
    ctx->pc = 0x1582B8u;
    // 0x1582b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1582B8u;
    {
        const bool branch_taken_0x1582b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1582b8) {
            ctx->pc = 0x1582E0u;
            goto label_1582e0;
        }
    }
    ctx->pc = 0x1582C0u;
label_1582c0:
    // 0x1582c0: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1582C0u;
    SET_GPR_U32(ctx, 31, 0x1582C8u);
    ctx->pc = 0x1582C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582C0u;
    // 0x1582c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1582C0u, 0x1582C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582C8u;
label_1582c8:
    // 0x1582c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1582C8u;
    {
        const bool branch_taken_0x1582c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1582CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582C8u;
        // 0x1582cc: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582c8) {
            ctx->pc = 0x1582ECu;
            goto label_1582ec;
        }
    }
    ctx->pc = 0x1582D0u;
label_1582d0:
    // 0x1582d0: 0xc056228  jal         func_1588A0
    ctx->pc = 0x1582D0u;
    SET_GPR_U32(ctx, 31, 0x1582D8u);
    ctx->pc = 0x1582D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582D0u;
    // 0x1582d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588A0u, 0x1582D0u, 0x1582D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582D8u;
label_1582d8:
    // 0x1582d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1582D8u;
    {
        const bool branch_taken_0x1582d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1582DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582D8u;
        // 0x1582dc: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582d8) {
            ctx->pc = 0x1582ECu;
            goto label_1582ec;
        }
    }
    ctx->pc = 0x1582E0u;
label_1582e0:
    // 0x1582e0: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x1582E0u;
    SET_GPR_U32(ctx, 31, 0x1582E8u);
    ctx->pc = 0x1582E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582E0u;
    // 0x1582e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x1582E0u, 0x1582E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1582E8u;
label_1582e8:
    // 0x1582e8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1582e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1582ec:
    // 0x1582ec: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1582ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1582f0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1582f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1582f4: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1582F4u;
    {
        const bool branch_taken_0x1582f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1582F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582F4u;
        // 0x1582f8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1582f4) {
            ctx->pc = 0x15830Cu;
            goto label_15830c;
        }
    }
    ctx->pc = 0x1582FCu;
label_1582fc:
    // 0x1582fc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1582fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158300: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x158300u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x158304: 0x5460ffda  bnel        $v1, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x158304u;
    {
        const bool branch_taken_0x158304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158304) {
            ctx->pc = 0x158308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158304u;
            // 0x158308: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158270;
        }
    }
    ctx->pc = 0x15830Cu;
label_15830c:
    // 0x15830c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15830cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x158318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15831c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15831cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158320: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x158320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158324: 0x3e00008  jr          $ra
    ctx->pc = 0x158324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158324u;
        // 0x158328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15832Cu;
    // 0x15832c: 0x0  nop
    ctx->pc = 0x15832cu;
    // NOP
    ctx->pc = 0x158330u;
}
