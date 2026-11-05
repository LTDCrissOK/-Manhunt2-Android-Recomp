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

// Function: sub_00165238
// Address: 0x165238 - 0x1652f0
void sub_00165238_0x165238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165238_0x165238");
#endif

    switch (ctx->pc) {
        case 0x165268u: goto label_165268;
        case 0x165270u: goto label_165270;
        case 0x16528cu: goto label_16528c;
        case 0x16529cu: goto label_16529c;
        case 0x1652a4u: goto label_1652a4;
        case 0x1652bcu: goto label_1652bc;
        case 0x1652ccu: goto label_1652cc;
        case 0x1652d8u: goto label_1652d8;
        default: break;
    }

    ctx->pc = 0x165238u;

    // 0x165238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16523c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165248: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16524c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165250: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x165254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165258: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165258u;
    {
        const bool branch_taken_0x165258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165258u;
        // 0x16525c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165258) {
            ctx->pc = 0x165278u;
            goto label_165278;
        }
    }
    ctx->pc = 0x165260u;
    // 0x165260: 0xc0596ce  jal         func_165B38
    ctx->pc = 0x165260u;
    SET_GPR_U32(ctx, 31, 0x165268u);
    ctx->pc = 0x165B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B38u, 0x165260u, 0x165268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165268u;
label_165268:
    // 0x165268: 0xc059634  jal         func_1658D0
    ctx->pc = 0x165268u;
    SET_GPR_U32(ctx, 31, 0x165270u);
    ctx->pc = 0x16526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165268u;
    // 0x16526c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658D0u, 0x165268u, 0x165270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165270u;
label_165270:
    // 0x165270: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x165270u;
    {
        const bool branch_taken_0x165270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165270u;
        // 0x165274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165270) {
            ctx->pc = 0x1652DCu;
            goto label_1652dc;
        }
    }
    ctx->pc = 0x165278u;
label_165278:
    // 0x165278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16527c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165280: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x165280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165284: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x165284u;
    SET_GPR_U32(ctx, 31, 0x16528Cu);
    ctx->pc = 0x165288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165284u;
    // 0x165288: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x165284u, 0x16528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16528Cu;
label_16528c:
    // 0x16528c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16528Cu;
    {
        const bool branch_taken_0x16528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16528Cu;
        // 0x165290: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16528c) {
            ctx->pc = 0x1652ACu;
            goto label_1652ac;
        }
    }
    ctx->pc = 0x165294u;
    // 0x165294: 0xc0596ce  jal         func_165B38
    ctx->pc = 0x165294u;
    SET_GPR_U32(ctx, 31, 0x16529Cu);
    ctx->pc = 0x165298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165294u;
    // 0x165298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B38u, 0x165294u, 0x16529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16529Cu;
label_16529c:
    // 0x16529c: 0xc059670  jal         func_1659C0
    ctx->pc = 0x16529Cu;
    SET_GPR_U32(ctx, 31, 0x1652A4u);
    ctx->pc = 0x1652A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16529Cu;
    // 0x1652a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x16529Cu, 0x1652A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652A4u;
label_1652a4:
    // 0x1652a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1652A4u;
    {
        const bool branch_taken_0x1652a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652A4u;
        // 0x1652a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652a4) {
            ctx->pc = 0x1652DCu;
            goto label_1652dc;
        }
    }
    ctx->pc = 0x1652ACu;
label_1652ac:
    // 0x1652ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1652acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1652b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1652b4: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x1652B4u;
    SET_GPR_U32(ctx, 31, 0x1652BCu);
    ctx->pc = 0x1652B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652B4u;
    // 0x1652b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x1652B4u, 0x1652BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652BCu;
label_1652bc:
    // 0x1652bc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1652BCu;
    {
        const bool branch_taken_0x1652bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1652bc) {
            ctx->pc = 0x1652C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1652BCu;
            // 0x1652c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1652DCu;
            goto label_1652dc;
        }
    }
    ctx->pc = 0x1652C4u;
    // 0x1652c4: 0xc0596ce  jal         func_165B38
    ctx->pc = 0x1652C4u;
    SET_GPR_U32(ctx, 31, 0x1652CCu);
    ctx->pc = 0x1652C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652C4u;
    // 0x1652c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B38u, 0x1652C4u, 0x1652CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652CCu;
label_1652cc:
    // 0x1652cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1652ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1652d0: 0xc059710  jal         func_165C40
    ctx->pc = 0x1652D0u;
    SET_GPR_U32(ctx, 31, 0x1652D8u);
    ctx->pc = 0x1652D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652D0u;
    // 0x1652d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C40u, 0x1652D0u, 0x1652D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652D8u;
label_1652d8:
    // 0x1652d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1652d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1652dc:
    // 0x1652dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1652dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1652e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1652e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1652e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1652E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1652E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652E4u;
        // 0x1652e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1652E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1652ECu;
    // 0x1652ec: 0x0  nop
    ctx->pc = 0x1652ecu;
    // NOP
    ctx->pc = 0x1652f0u;
}
