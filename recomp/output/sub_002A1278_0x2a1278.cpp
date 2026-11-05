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

// Function: sub_002A1278
// Address: 0x2a1278 - 0x2a1308
void sub_002A1278_0x2a1278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1278_0x2a1278");
#endif

    switch (ctx->pc) {
        case 0x2a12acu: goto label_2a12ac;
        case 0x2a12c0u: goto label_2a12c0;
        case 0x2a12ecu: goto label_2a12ec;
        default: break;
    }

    ctx->pc = 0x2a1278u;

    // 0x2a1278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a127c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a1280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a1284: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a1284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a128c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a128cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1290: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a1290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a1294: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A1294u;
    {
        const bool branch_taken_0x2a1294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1294u;
        // 0x2a1298: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1294) {
            ctx->pc = 0x2A12ECu;
            goto label_2a12ec;
        }
    }
    ctx->pc = 0x2A129Cu;
    // 0x2a129c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a12a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a12a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A12A4u;
    SET_GPR_U32(ctx, 31, 0x2A12ACu);
    ctx->pc = 0x2A12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12A4u;
    // 0x2a12a8: 0x24a5c858  addiu       $a1, $a1, -0x37A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A12A4u, 0x2A12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12ACu;
label_2a12ac:
    // 0x2a12ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a12acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a12b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A12B0u;
    {
        const bool branch_taken_0x2a12b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12B0u;
        // 0x2a12b4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12b0) {
            ctx->pc = 0x2A12DCu;
            goto label_2a12dc;
        }
    }
    ctx->pc = 0x2A12B8u;
    // 0x2a12b8: 0xc0d73a6  jal         func_35CE98
    ctx->pc = 0x2A12B8u;
    SET_GPR_U32(ctx, 31, 0x2A12C0u);
    ctx->pc = 0x2A12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12B8u;
    // 0x2a12bc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE98u, 0x2A12B8u, 0x2A12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12C0u;
label_2a12c0:
    // 0x2a12c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a12c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a12c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a12cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a12d0: 0xac5002e4  sw          $s0, 0x2E4($v0)
    ctx->pc = 0x2a12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
    // 0x2a12d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A12D4u;
    {
        const bool branch_taken_0x2a12d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12D4u;
        // 0x2a12d8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a12d4) {
            ctx->pc = 0x2A12ECu;
            goto label_2a12ec;
        }
    }
    ctx->pc = 0x2A12DCu;
label_2a12dc:
    // 0x2a12dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a12dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a12e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a12e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A12E4u;
    SET_GPR_U32(ctx, 31, 0x2A12ECu);
    ctx->pc = 0x2A12E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12E4u;
    // 0x2a12e8: 0x24a5c868  addiu       $a1, $a1, -0x3798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A12E4u, 0x2A12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12ECu;
label_2a12ec:
    // 0x2a12ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a12ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a12f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a12f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a12f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a12f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a12f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a12f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a12fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A12FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12FCu;
        // 0x2a1300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A12FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1304u;
    // 0x2a1304: 0x0  nop
    ctx->pc = 0x2a1304u;
    // NOP
    ctx->pc = 0x2a1308u;
}
