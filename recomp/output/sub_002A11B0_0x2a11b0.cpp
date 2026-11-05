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

// Function: sub_002A11B0
// Address: 0x2a11b0 - 0x2a1278
void sub_002A11B0_0x2a11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A11B0_0x2a11b0");
#endif

    switch (ctx->pc) {
        case 0x2a11d8u: goto label_2a11d8;
        case 0x2a11f0u: goto label_2a11f0;
        case 0x2a11fcu: goto label_2a11fc;
        case 0x2a1204u: goto label_2a1204;
        case 0x2a120cu: goto label_2a120c;
        case 0x2a1214u: goto label_2a1214;
        case 0x2a1230u: goto label_2a1230;
        case 0x2a1244u: goto label_2a1244;
        default: break;
    }

    ctx->pc = 0x2a11b0u;

    // 0x2a11b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a11b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a11b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a11b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a11b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a11bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a11c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a11c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a11c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a11c8: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2a11cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a11ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a11d0: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x2A11D0u;
    SET_GPR_U32(ctx, 31, 0x2A11D8u);
    ctx->pc = 0x2A11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11D0u;
    // 0x2a11d4: 0x2630031c  addiu       $s0, $s1, 0x31C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B00u, 0x2A11D0u, 0x2A11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11D8u;
label_2a11d8:
    // 0x2a11d8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2a11d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a11dc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2a11e0: 0x26240308  addiu       $a0, $s1, 0x308
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x2a11e4: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x2a11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
    // 0x2a11e8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A11E8u;
    SET_GPR_U32(ctx, 31, 0x2A11F0u);
    ctx->pc = 0x2A11ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11E8u;
    // 0x2a11ec: 0xae230278  sw          $v1, 0x278($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A11E8u, 0x2A11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11F0u;
label_2a11f0:
    // 0x2a11f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a11f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11f4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A11F4u;
    SET_GPR_U32(ctx, 31, 0x2A11FCu);
    ctx->pc = 0x2A11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11F4u;
    // 0x2a11f8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A11F4u, 0x2A11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11FCu;
label_2a11fc:
    // 0x2a11fc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A11FCu;
    SET_GPR_U32(ctx, 31, 0x2A1204u);
    ctx->pc = 0x2A1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11FCu;
    // 0x2a1200: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A11FCu, 0x2A1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1204u;
label_2a1204:
    // 0x2a1204: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A1204u;
    SET_GPR_U32(ctx, 31, 0x2A120Cu);
    ctx->pc = 0x2A1208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1204u;
    // 0x2a1208: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A1204u, 0x2A120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A120Cu;
label_2a120c:
    // 0x2a120c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A120Cu;
    SET_GPR_U32(ctx, 31, 0x2A1214u);
    ctx->pc = 0x2A1210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A120Cu;
    // 0x2a1210: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A120Cu, 0x2A1214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1214u;
label_2a1214:
    // 0x2a1214: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A1214u;
    {
        const bool branch_taken_0x2a1214 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1214u;
        // 0x2a1218: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1214) {
            ctx->pc = 0x2A11F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a11f0;
        }
    }
    ctx->pc = 0x2A121Cu;
    // 0x2a121c: 0xae2002e0  sw          $zero, 0x2E0($s1)
    ctx->pc = 0x2a121cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 0));
    // 0x2a1220: 0x262402e4  addiu       $a0, $s1, 0x2E4
    ctx->pc = 0x2a1220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 740));
    // 0x2a1224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1228: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2A1228u;
    SET_GPR_U32(ctx, 31, 0x2A1230u);
    ctx->pc = 0x2A122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1228u;
    // 0x2a122c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2A1228u, 0x2A1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1230u;
label_2a1230:
    // 0x2a1230: 0xa2200304  sb          $zero, 0x304($s1)
    ctx->pc = 0x2a1230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 772), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1234: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a1234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a1238: 0x26240308  addiu       $a0, $s1, 0x308
    ctx->pc = 0x2a1238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 776));
    // 0x2a123c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2A123Cu;
    SET_GPR_U32(ctx, 31, 0x2A1244u);
    ctx->pc = 0x2A1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A123Cu;
    // 0x2a1240: 0x24a5c850  addiu       $a1, $a1, -0x37B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2A123Cu, 0x2A1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1244u;
label_2a1244:
    // 0x2a1244: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a1244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1248: 0xae200310  sw          $zero, 0x310($s1)
    ctx->pc = 0x2a1248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
    // 0x2a124c: 0xae200314  sw          $zero, 0x314($s1)
    ctx->pc = 0x2a124cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
    // 0x2a1250: 0xae200318  sw          $zero, 0x318($s1)
    ctx->pc = 0x2a1250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 0));
    // 0x2a1254: 0xae200f9c  sw          $zero, 0xF9C($s1)
    ctx->pc = 0x2a1254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3996), GPR_U32(ctx, 0));
    // 0x2a1258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a125c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a125cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a1260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1264: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a1264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a1268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a126c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A126Cu;
        // 0x2a1270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1274u;
    // 0x2a1274: 0x0  nop
    ctx->pc = 0x2a1274u;
    // NOP
    ctx->pc = 0x2a1278u;
}
