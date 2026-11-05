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

// Function: sub_002C3908
// Address: 0x2c3908 - 0x2c3980
void sub_002C3908_0x2c3908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3908_0x2c3908");
#endif

    switch (ctx->pc) {
        case 0x2c3908u: goto label_2c3908;
        case 0x2c390cu: goto label_2c390c;
        case 0x2c3910u: goto label_2c3910;
        case 0x2c3914u: goto label_2c3914;
        case 0x2c3918u: goto label_2c3918;
        case 0x2c391cu: goto label_2c391c;
        case 0x2c3920u: goto label_2c3920;
        case 0x2c3924u: goto label_2c3924;
        case 0x2c3928u: goto label_2c3928;
        case 0x2c392cu: goto label_2c392c;
        case 0x2c3930u: goto label_2c3930;
        case 0x2c3934u: goto label_2c3934;
        case 0x2c3938u: goto label_2c3938;
        case 0x2c393cu: goto label_2c393c;
        case 0x2c3940u: goto label_2c3940;
        case 0x2c3944u: goto label_2c3944;
        case 0x2c3948u: goto label_2c3948;
        case 0x2c394cu: goto label_2c394c;
        case 0x2c3950u: goto label_2c3950;
        case 0x2c3954u: goto label_2c3954;
        case 0x2c3958u: goto label_2c3958;
        case 0x2c395cu: goto label_2c395c;
        case 0x2c3960u: goto label_2c3960;
        case 0x2c3964u: goto label_2c3964;
        case 0x2c3968u: goto label_2c3968;
        case 0x2c396cu: goto label_2c396c;
        case 0x2c3970u: goto label_2c3970;
        case 0x2c3974u: goto label_2c3974;
        case 0x2c3978u: goto label_2c3978;
        case 0x2c397cu: goto label_2c397c;
        default: break;
    }

    ctx->pc = 0x2c3908u;

label_2c3908:
    // 0x2c3908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c390c:
    // 0x2c390c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3910:
    // 0x2c3910: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3914:
    // 0x2c3914: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c3914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3918:
    // 0x2c3918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c3918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c391c:
    // 0x2c391c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c391cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3920:
    // 0x2c3920: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c3920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2c3924:
    // 0x2c3924: 0x82220018  lb          $v0, 0x18($s1)
    ctx->pc = 0x2c3924u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2c3928:
    // 0x2c3928: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2c392c:
    if (ctx->pc == 0x2C392Cu) {
        ctx->pc = 0x2C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3928u;
        // 0x2c392c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3930u;
        goto label_2c3930;
    }
    ctx->pc = 0x2C3928u;
    {
        const bool branch_taken_0x2c3928 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3928u;
        // 0x2c392c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3928) {
            ctx->pc = 0x2C3968u;
            goto label_2c3968;
        }
    }
    ctx->pc = 0x2C3930u;
label_2c3930:
    // 0x2c3930: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2c3930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c3934:
    // 0x2c3934: 0x0  nop
    ctx->pc = 0x2c3934u;
    // NOP
label_2c3938:
    // 0x2c3938: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c3938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c393c:
    // 0x2c393c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c393cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3940:
    // 0x2c3940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c3944:
    // 0x2c3944: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3948:
    // 0x2c3948: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x2c3948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2c394c:
    // 0x2c394c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2c394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2c3950:
    // 0x2c3950: 0x60f809  jalr        $v1
label_2c3954:
    if (ctx->pc == 0x2C3954u) {
        ctx->pc = 0x2C3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3950u;
        // 0x2c3954: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3958u;
        goto label_2c3958;
    }
    ctx->pc = 0x2C3950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C3958u);
        ctx->pc = 0x2C3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3950u;
        // 0x2c3954: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3950u, 0x2C3958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3958u;
label_2c3958:
    // 0x2c3958: 0x82220018  lb          $v0, 0x18($s1)
    ctx->pc = 0x2c3958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2c395c:
    // 0x2c395c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c395cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c3960:
    // 0x2c3960: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_2c3964:
    if (ctx->pc == 0x2C3964u) {
        ctx->pc = 0x2C3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3960u;
        // 0x2c3964: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3968u;
        goto label_2c3968;
    }
    ctx->pc = 0x2C3960u;
    {
        const bool branch_taken_0x2c3960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3960) {
            ctx->pc = 0x2C3964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3960u;
            // 0x2c3964: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C3968u;
label_2c3968:
    // 0x2c3968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c396c:
    // 0x2c396c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c396cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3970:
    // 0x2c3970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c3970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3974:
    // 0x2c3974: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c3974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c3978:
    // 0x2c3978: 0x3e00008  jr          $ra
label_2c397c:
    if (ctx->pc == 0x2C397Cu) {
        ctx->pc = 0x2C397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3978u;
        // 0x2c397c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3980u;
        goto label_fallthrough_0x2c3978;
    }
    ctx->pc = 0x2C3978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3978u;
        // 0x2c397c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3978:
    ctx->pc = 0x2C3980u;
}
