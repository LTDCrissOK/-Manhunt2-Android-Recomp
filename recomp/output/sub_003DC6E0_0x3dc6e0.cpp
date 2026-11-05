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

// Function: sub_003DC6E0
// Address: 0x3dc6e0 - 0x3dc770
void sub_003DC6E0_0x3dc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC6E0_0x3dc6e0");
#endif

    switch (ctx->pc) {
        case 0x3dc70cu: goto label_3dc70c;
        case 0x3dc72cu: goto label_3dc72c;
        default: break;
    }

    ctx->pc = 0x3dc6e0u;

    // 0x3dc6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dc6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dc6e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dc6e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dc6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dc6ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc6f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc6f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dc6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dc6f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3dc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dc6fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC6FCu;
    {
        const bool branch_taken_0x3dc6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6FCu;
        // 0x3dc700: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc6fc) {
            ctx->pc = 0x3DC720u;
            goto label_3dc720;
        }
    }
    ctx->pc = 0x3DC704u;
    // 0x3dc704: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DC704u;
    SET_GPR_U32(ctx, 31, 0x3DC70Cu);
    ctx->pc = 0x3DC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC704u;
    // 0x3dc708: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DC704u, 0x3DC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC70Cu;
label_3dc70c:
    // 0x3dc70c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3dc70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3dc710: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dc710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dc714: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3dc714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3dc718: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC718u;
    {
        const bool branch_taken_0x3dc718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC718u;
        // 0x3dc71c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc718) {
            ctx->pc = 0x3DC73Cu;
            goto label_3dc73c;
        }
    }
    ctx->pc = 0x3DC720u;
label_3dc720:
    // 0x3dc720: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3dc720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dc724: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DC724u;
    SET_GPR_U32(ctx, 31, 0x3DC72Cu);
    ctx->pc = 0x3DC728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC724u;
    // 0x3dc728: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DC724u, 0x3DC72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC72Cu;
label_3dc72c:
    // 0x3dc72c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3dc72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3dc730: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3dc730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3dc734: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3dc734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3dc738: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dc738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3dc73c:
    // 0x3dc73c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dc73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dc740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc744: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3dc744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3dc748: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dc748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc74c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dc74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dc750: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dc750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dc754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dc754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dc758: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dc758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dc75c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dc75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3dc760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dc760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc764: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC764u;
        // 0x3dc768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC76Cu;
    // 0x3dc76c: 0x0  nop
    ctx->pc = 0x3dc76cu;
    // NOP
    ctx->pc = 0x3dc770u;
}
