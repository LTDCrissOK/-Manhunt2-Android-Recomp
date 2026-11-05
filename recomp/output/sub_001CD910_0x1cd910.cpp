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

// Function: sub_001CD910
// Address: 0x1cd910 - 0x1cda10
void sub_001CD910_0x1cd910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD910_0x1cd910");
#endif

    switch (ctx->pc) {
        case 0x1cd960u: goto label_1cd960;
        case 0x1cd97cu: goto label_1cd97c;
        case 0x1cd98cu: goto label_1cd98c;
        case 0x1cd9c8u: goto label_1cd9c8;
        case 0x1cd9e4u: goto label_1cd9e4;
        default: break;
    }

    ctx->pc = 0x1cd910u;

    // 0x1cd910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd914: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cd914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cd918: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cd918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cd91c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cd91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd924: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cd924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd928: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd92c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD92Cu;
    {
        const bool branch_taken_0x1cd92c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD92Cu;
        // 0x1cd930: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd92c) {
            ctx->pc = 0x1CD93Cu;
            goto label_1cd93c;
        }
    }
    ctx->pc = 0x1CD934u;
    // 0x1cd934: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1CD934u;
    {
        const bool branch_taken_0x1cd934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD934u;
        // 0x1cd938: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd934) {
            ctx->pc = 0x1CD9F0u;
            goto label_1cd9f0;
        }
    }
    ctx->pc = 0x1CD93Cu;
label_1cd93c:
    // 0x1cd93c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cd940: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd944: 0x8c6289bc  lw          $v0, -0x7644($v1)
    ctx->pc = 0x1cd944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F89BCu));
    // 0x1cd948: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD948u;
    {
        const bool branch_taken_0x1cd948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD948u;
        // 0x1cd94c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd948) {
            ctx->pc = 0x1CD9A8u;
            goto label_1cd9a8;
        }
    }
    ctx->pc = 0x1CD950u;
    // 0x1cd950: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1cd950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1cd954: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1cd954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd958: 0x24442b18  addiu       $a0, $v0, 0x2B18
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11032));
    // 0x1cd95c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1cd95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1cd960:
    // 0x1cd960: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cd960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cd964: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd968: 0x1472000a  bne         $v1, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD968u;
    {
        const bool branch_taken_0x1cd968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1CD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD968u;
        // 0x1cd96c: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd968) {
            ctx->pc = 0x1CD994u;
            goto label_1cd994;
        }
    }
    ctx->pc = 0x1CD970u;
    // 0x1cd970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd974: 0xc07382c  jal         func_1CE0B0
    ctx->pc = 0x1CD974u;
    SET_GPR_U32(ctx, 31, 0x1CD97Cu);
    ctx->pc = 0x1CD978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD974u;
    // 0x1cd978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE0B0u, 0x1CD974u, 0x1CD97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD97Cu;
label_1cd97c:
    // 0x1cd97c: 0x1451001c  bne         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CD97Cu;
    {
        const bool branch_taken_0x1cd97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1CD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD97Cu;
        // 0x1cd980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd97c) {
            ctx->pc = 0x1CD9F0u;
            goto label_1cd9f0;
        }
    }
    ctx->pc = 0x1CD984u;
    // 0x1cd984: 0xc073b24  jal         func_1CEC90
    ctx->pc = 0x1CD984u;
    SET_GPR_U32(ctx, 31, 0x1CD98Cu);
    ctx->pc = 0x1CD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD984u;
    // 0x1cd988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC90u, 0x1CD984u, 0x1CD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD98Cu;
label_1cd98c:
    // 0x1cd98c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD98Cu;
    {
        const bool branch_taken_0x1cd98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD98Cu;
        // 0x1cd990: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd98c) {
            ctx->pc = 0x1CD9F4u;
            goto label_1cd9f4;
        }
    }
    ctx->pc = 0x1CD994u;
label_1cd994:
    // 0x1cd994: 0x8ca289bc  lw          $v0, -0x7644($a1)
    ctx->pc = 0x1cd994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937020)));
    // 0x1cd998: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1cd998u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd99c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1cd99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cd9a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CD9A0u;
    {
        const bool branch_taken_0x1cd9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9A0u;
        // 0x1cd9a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9a0) {
            ctx->pc = 0x1CD960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd960;
        }
    }
    ctx->pc = 0x1CD9A8u;
label_1cd9a8:
    // 0x1cd9a8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1cd9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd9b0: 0x8e3091c0  lw          $s0, -0x6E40($s1)
    ctx->pc = 0x1cd9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3F91C0u));
    // 0x1cd9b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9b8: 0xae2291c0  sw          $v0, -0x6E40($s1)
    ctx->pc = 0x1cd9b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F91C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C0u, _value); } while (0);
    // 0x1cd9bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9c0: 0xc073aa6  jal         func_1CEA98
    ctx->pc = 0x1CD9C0u;
    SET_GPR_U32(ctx, 31, 0x1CD9C8u);
    ctx->pc = 0x1CD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9C0u;
    // 0x1cd9c4: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA98u, 0x1CD9C0u, 0x1CD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9C8u;
label_1cd9c8:
    // 0x1cd9c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cd9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9cc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd9d0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD9D0u;
    {
        const bool branch_taken_0x1cd9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9D0u;
        // 0x1cd9d4: 0xae3091c0  sw          $s0, -0x6E40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294939072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9d0) {
            ctx->pc = 0x1CD9ECu;
            goto label_1cd9ec;
        }
    }
    ctx->pc = 0x1CD9D8u;
    // 0x1cd9d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9dc: 0xc073b12  jal         func_1CEC48
    ctx->pc = 0x1CD9DCu;
    SET_GPR_U32(ctx, 31, 0x1CD9E4u);
    ctx->pc = 0x1CD9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9DCu;
    // 0x1cd9e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC48u, 0x1CD9DCu, 0x1CD9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9E4u;
label_1cd9e4:
    // 0x1cd9e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD9E4u;
    {
        const bool branch_taken_0x1cd9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9E4u;
        // 0x1cd9e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9e4) {
            ctx->pc = 0x1CD9F4u;
            goto label_1cd9f4;
        }
    }
    ctx->pc = 0x1CD9ECu;
label_1cd9ec:
    // 0x1cd9ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cd9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cd9f0:
    // 0x1cd9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd9f4:
    // 0x1cd9f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd9f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd9f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd9fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cd9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cda00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cda00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cda04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA04u;
        // 0x1cda08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDA0Cu;
    // 0x1cda0c: 0x0  nop
    ctx->pc = 0x1cda0cu;
    // NOP
    ctx->pc = 0x1cda10u;
}
