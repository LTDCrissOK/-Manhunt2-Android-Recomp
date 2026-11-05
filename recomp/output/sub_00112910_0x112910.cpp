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

// Function: sub_00112910
// Address: 0x112910 - 0x1129c8
void sub_00112910_0x112910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112910_0x112910");
#endif

    switch (ctx->pc) {
        case 0x112944u: goto label_112944;
        case 0x112960u: goto label_112960;
        case 0x112978u: goto label_112978;
        default: break;
    }

    ctx->pc = 0x112910u;

    // 0x112910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x112914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x112914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x112918: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x112918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11291c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11291cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112924: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x112924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x112928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x112928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11292c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x112930: 0x922200a4  lbu         $v0, 0xA4($s1)
    ctx->pc = 0x112930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x112934: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112934u;
    {
        const bool branch_taken_0x112934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112934u;
        // 0x112938: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112934) {
            ctx->pc = 0x11294Cu;
            goto label_11294c;
        }
    }
    ctx->pc = 0x11293Cu;
    // 0x11293c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11293Cu;
    {
        const bool branch_taken_0x11293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11293Cu;
        // 0x112940: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11293c) {
            ctx->pc = 0x1129A4u;
            goto label_1129a4;
        }
    }
    ctx->pc = 0x112944u;
label_112944:
    // 0x112944: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x112944u;
    {
        const bool branch_taken_0x112944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112944u;
        // 0x112948: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112944) {
            ctx->pc = 0x1129A4u;
            goto label_1129a4;
        }
    }
    ctx->pc = 0x11294Cu;
label_11294c:
    // 0x11294c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11294cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112954: 0x26330024  addiu       $s3, $s1, 0x24
    ctx->pc = 0x112954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x112958: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x112958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11295c: 0x0  nop
    ctx->pc = 0x11295cu;
    // NOP
label_112960:
    // 0x112960: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x112960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x112964: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112968: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112968u;
    {
        const bool branch_taken_0x112968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112968u;
        // 0x11296c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112968) {
            ctx->pc = 0x112990u;
            goto label_112990;
        }
    }
    ctx->pc = 0x112970u;
    // 0x112970: 0xc04566c  jal         func_1159B0
    ctx->pc = 0x112970u;
    SET_GPR_U32(ctx, 31, 0x112978u);
    ctx->pc = 0x112974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112970u;
    // 0x112974: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x112970u, 0x112978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112978u;
label_112978:
    // 0x112978: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x112978u;
    {
        const bool branch_taken_0x112978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112978u;
        // 0x11297c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112978) {
            ctx->pc = 0x112944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112944;
        }
    }
    ctx->pc = 0x112980u;
    // 0x112980: 0x922300a4  lbu         $v1, 0xA4($s1)
    ctx->pc = 0x112980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x112984: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x112984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x112988: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112988u;
    {
        const bool branch_taken_0x112988 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x11298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112988u;
        // 0x11298c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112988) {
            ctx->pc = 0x1129A0u;
            goto label_1129a0;
        }
    }
    ctx->pc = 0x112990u;
label_112990:
    // 0x112990: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x112990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x112994: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x112994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x112998: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x112998u;
    {
        const bool branch_taken_0x112998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112998u;
        // 0x11299c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112998) {
            ctx->pc = 0x112960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112960;
        }
    }
    ctx->pc = 0x1129A0u;
label_1129a0:
    // 0x1129a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1129a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1129a4:
    // 0x1129a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1129a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1129a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1129ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1129acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1129b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1129b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1129b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1129b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1129b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1129b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1129bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1129BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1129C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129BCu;
        // 0x1129c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1129C4u;
    // 0x1129c4: 0x0  nop
    ctx->pc = 0x1129c4u;
    // NOP
    ctx->pc = 0x1129c8u;
}
