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

// Function: sub_0028E520
// Address: 0x28e520 - 0x28e600
void sub_0028E520_0x28e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E520_0x28e520");
#endif

    switch (ctx->pc) {
        case 0x28e578u: goto label_28e578;
        case 0x28e59cu: goto label_28e59c;
        default: break;
    }

    ctx->pc = 0x28e520u;

    // 0x28e520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28e524: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28e524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28e528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28e52c: 0x24451128  addiu       $a1, $v0, 0x1128
    ctx->pc = 0x28e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x28e530: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28e530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28e534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28e534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e538: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28e538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28e53c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e540: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28e540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e544: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28e548: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28e548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28e54c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28e550: 0x8c441128  lw          $a0, 0x1128($v0)
    ctx->pc = 0x28e550u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4C1128u));
    // 0x28e554: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x28e554u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C112Cu));
    // 0x28e558: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28e558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28e55c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x28e55cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x28e560: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28e560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28e564: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x28E564u;
    {
        const bool branch_taken_0x28e564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E564u;
        // 0x28e568: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e564) {
            ctx->pc = 0x28E5D8u;
            goto label_28e5d8;
        }
    }
    ctx->pc = 0x28E56Cu;
    // 0x28e56c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28e56cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e570: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x28e570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e574: 0x0  nop
    ctx->pc = 0x28e574u;
    // NOP
label_28e578:
    // 0x28e578: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x28e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x28e57c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28e57cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28e580: 0x8e831128  lw          $v1, 0x1128($s4)
    ctx->pc = 0x28e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4392)));
    // 0x28e584: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x28e584u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28e588: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28e588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e58c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28e590: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28e594: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x28E594u;
    SET_GPR_U32(ctx, 31, 0x28E59Cu);
    ctx->pc = 0x28E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E594u;
    // 0x28e598: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x28E594u, 0x28E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E59Cu;
label_28e59c:
    // 0x28e59c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E59Cu;
    {
        const bool branch_taken_0x28e59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e59c) {
            ctx->pc = 0x28E5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E59Cu;
            // 0x28e5a0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E5B4u;
            goto label_28e5b4;
        }
    }
    ctx->pc = 0x28E5A4u;
    // 0x28e5a4: 0x8e431128  lw          $v1, 0x1128($s2)
    ctx->pc = 0x28e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4392)));
    // 0x28e5a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28e5ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28E5ACu;
    {
        const bool branch_taken_0x28e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5ACu;
        // 0x28e5b0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5ac) {
            ctx->pc = 0x28E5DCu;
            goto label_28e5dc;
        }
    }
    ctx->pc = 0x28E5B4u;
label_28e5b4:
    // 0x28e5b4: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x28e5b4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    // 0x28e5b8: 0x8e431128  lw          $v1, 0x1128($s2)
    ctx->pc = 0x28e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4392)));
    // 0x28e5bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e5c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28e5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x28e5c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28e5c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28e5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28e5cc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28e5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28e5d0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x28E5D0u;
    {
        const bool branch_taken_0x28e5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e5d0) {
            ctx->pc = 0x28E578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e578;
        }
    }
    ctx->pc = 0x28E5D8u;
label_28e5d8:
    // 0x28e5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e5dc:
    // 0x28e5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e5e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28e5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e5e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28e5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e5e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28e5e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28e5ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28e5ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e5f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28e5f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28e5f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28e5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5F8u;
        // 0x28e5fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E600u;
}
