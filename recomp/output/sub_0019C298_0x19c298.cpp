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

// Function: sub_0019C298
// Address: 0x19c298 - 0x19c510
void sub_0019C298_0x19c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C298_0x19c298");
#endif

    switch (ctx->pc) {
        case 0x19c298u: goto label_19c298;
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2a0u: goto label_19c2a0;
        case 0x19c2a4u: goto label_19c2a4;
        case 0x19c2a8u: goto label_19c2a8;
        case 0x19c2acu: goto label_19c2ac;
        case 0x19c2b0u: goto label_19c2b0;
        case 0x19c2b4u: goto label_19c2b4;
        case 0x19c2b8u: goto label_19c2b8;
        case 0x19c2bcu: goto label_19c2bc;
        case 0x19c2c0u: goto label_19c2c0;
        case 0x19c2c4u: goto label_19c2c4;
        case 0x19c2c8u: goto label_19c2c8;
        case 0x19c2ccu: goto label_19c2cc;
        case 0x19c2d0u: goto label_19c2d0;
        case 0x19c2d4u: goto label_19c2d4;
        case 0x19c2d8u: goto label_19c2d8;
        case 0x19c2dcu: goto label_19c2dc;
        case 0x19c2e0u: goto label_19c2e0;
        case 0x19c2e4u: goto label_19c2e4;
        case 0x19c2e8u: goto label_19c2e8;
        case 0x19c2ecu: goto label_19c2ec;
        case 0x19c2f0u: goto label_19c2f0;
        case 0x19c2f4u: goto label_19c2f4;
        case 0x19c2f8u: goto label_19c2f8;
        case 0x19c2fcu: goto label_19c2fc;
        case 0x19c300u: goto label_19c300;
        case 0x19c304u: goto label_19c304;
        case 0x19c308u: goto label_19c308;
        case 0x19c30cu: goto label_19c30c;
        case 0x19c310u: goto label_19c310;
        case 0x19c314u: goto label_19c314;
        case 0x19c318u: goto label_19c318;
        case 0x19c31cu: goto label_19c31c;
        case 0x19c320u: goto label_19c320;
        case 0x19c324u: goto label_19c324;
        case 0x19c328u: goto label_19c328;
        case 0x19c32cu: goto label_19c32c;
        case 0x19c330u: goto label_19c330;
        case 0x19c334u: goto label_19c334;
        case 0x19c338u: goto label_19c338;
        case 0x19c33cu: goto label_19c33c;
        case 0x19c340u: goto label_19c340;
        case 0x19c344u: goto label_19c344;
        case 0x19c348u: goto label_19c348;
        case 0x19c34cu: goto label_19c34c;
        case 0x19c350u: goto label_19c350;
        case 0x19c354u: goto label_19c354;
        case 0x19c358u: goto label_19c358;
        case 0x19c35cu: goto label_19c35c;
        case 0x19c360u: goto label_19c360;
        case 0x19c364u: goto label_19c364;
        case 0x19c368u: goto label_19c368;
        case 0x19c36cu: goto label_19c36c;
        case 0x19c370u: goto label_19c370;
        case 0x19c374u: goto label_19c374;
        case 0x19c378u: goto label_19c378;
        case 0x19c37cu: goto label_19c37c;
        case 0x19c380u: goto label_19c380;
        case 0x19c384u: goto label_19c384;
        case 0x19c388u: goto label_19c388;
        case 0x19c38cu: goto label_19c38c;
        case 0x19c390u: goto label_19c390;
        case 0x19c394u: goto label_19c394;
        case 0x19c398u: goto label_19c398;
        case 0x19c39cu: goto label_19c39c;
        case 0x19c3a0u: goto label_19c3a0;
        case 0x19c3a4u: goto label_19c3a4;
        case 0x19c3a8u: goto label_19c3a8;
        case 0x19c3acu: goto label_19c3ac;
        case 0x19c3b0u: goto label_19c3b0;
        case 0x19c3b4u: goto label_19c3b4;
        case 0x19c3b8u: goto label_19c3b8;
        case 0x19c3bcu: goto label_19c3bc;
        case 0x19c3c0u: goto label_19c3c0;
        case 0x19c3c4u: goto label_19c3c4;
        case 0x19c3c8u: goto label_19c3c8;
        case 0x19c3ccu: goto label_19c3cc;
        case 0x19c3d0u: goto label_19c3d0;
        case 0x19c3d4u: goto label_19c3d4;
        case 0x19c3d8u: goto label_19c3d8;
        case 0x19c3dcu: goto label_19c3dc;
        case 0x19c3e0u: goto label_19c3e0;
        case 0x19c3e4u: goto label_19c3e4;
        case 0x19c3e8u: goto label_19c3e8;
        case 0x19c3ecu: goto label_19c3ec;
        case 0x19c3f0u: goto label_19c3f0;
        case 0x19c3f4u: goto label_19c3f4;
        case 0x19c3f8u: goto label_19c3f8;
        case 0x19c3fcu: goto label_19c3fc;
        case 0x19c400u: goto label_19c400;
        case 0x19c404u: goto label_19c404;
        case 0x19c408u: goto label_19c408;
        case 0x19c40cu: goto label_19c40c;
        case 0x19c410u: goto label_19c410;
        case 0x19c414u: goto label_19c414;
        case 0x19c418u: goto label_19c418;
        case 0x19c41cu: goto label_19c41c;
        case 0x19c420u: goto label_19c420;
        case 0x19c424u: goto label_19c424;
        case 0x19c428u: goto label_19c428;
        case 0x19c42cu: goto label_19c42c;
        case 0x19c430u: goto label_19c430;
        case 0x19c434u: goto label_19c434;
        case 0x19c438u: goto label_19c438;
        case 0x19c43cu: goto label_19c43c;
        case 0x19c440u: goto label_19c440;
        case 0x19c444u: goto label_19c444;
        case 0x19c448u: goto label_19c448;
        case 0x19c44cu: goto label_19c44c;
        case 0x19c450u: goto label_19c450;
        case 0x19c454u: goto label_19c454;
        case 0x19c458u: goto label_19c458;
        case 0x19c45cu: goto label_19c45c;
        case 0x19c460u: goto label_19c460;
        case 0x19c464u: goto label_19c464;
        case 0x19c468u: goto label_19c468;
        case 0x19c46cu: goto label_19c46c;
        case 0x19c470u: goto label_19c470;
        case 0x19c474u: goto label_19c474;
        case 0x19c478u: goto label_19c478;
        case 0x19c47cu: goto label_19c47c;
        case 0x19c480u: goto label_19c480;
        case 0x19c484u: goto label_19c484;
        case 0x19c488u: goto label_19c488;
        case 0x19c48cu: goto label_19c48c;
        case 0x19c490u: goto label_19c490;
        case 0x19c494u: goto label_19c494;
        case 0x19c498u: goto label_19c498;
        case 0x19c49cu: goto label_19c49c;
        case 0x19c4a0u: goto label_19c4a0;
        case 0x19c4a4u: goto label_19c4a4;
        case 0x19c4a8u: goto label_19c4a8;
        case 0x19c4acu: goto label_19c4ac;
        case 0x19c4b0u: goto label_19c4b0;
        case 0x19c4b4u: goto label_19c4b4;
        case 0x19c4b8u: goto label_19c4b8;
        case 0x19c4bcu: goto label_19c4bc;
        case 0x19c4c0u: goto label_19c4c0;
        case 0x19c4c4u: goto label_19c4c4;
        case 0x19c4c8u: goto label_19c4c8;
        case 0x19c4ccu: goto label_19c4cc;
        case 0x19c4d0u: goto label_19c4d0;
        case 0x19c4d4u: goto label_19c4d4;
        case 0x19c4d8u: goto label_19c4d8;
        case 0x19c4dcu: goto label_19c4dc;
        case 0x19c4e0u: goto label_19c4e0;
        case 0x19c4e4u: goto label_19c4e4;
        case 0x19c4e8u: goto label_19c4e8;
        case 0x19c4ecu: goto label_19c4ec;
        case 0x19c4f0u: goto label_19c4f0;
        case 0x19c4f4u: goto label_19c4f4;
        case 0x19c4f8u: goto label_19c4f8;
        case 0x19c4fcu: goto label_19c4fc;
        case 0x19c500u: goto label_19c500;
        case 0x19c504u: goto label_19c504;
        case 0x19c508u: goto label_19c508;
        case 0x19c50cu: goto label_19c50c;
        default: break;
    }

    ctx->pc = 0x19c298u;

label_19c298:
    // 0x19c298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19c29c:
    // 0x19c29c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_19c2a0:
    // 0x19c2a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19c2a4:
    // 0x19c2a4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_19c2a8:
    // 0x19c2a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c2ac:
    // 0x19c2ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19c2b0:
    // 0x19c2b0: 0x24510898  addiu       $s1, $v0, 0x898
    ctx->pc = 0x19c2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
label_19c2b4:
    // 0x19c2b4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x19c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_19c2b8:
    // 0x19c2b8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19c2bc:
    // 0x19c2bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19c2c0:
    // 0x19c2c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19c2c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c2c4:
    // 0x19c2c4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x19c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_19c2c8:
    // 0x19c2c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19c2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c2cc:
    // 0x19c2cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19c2d0:
    // 0x19c2d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c2d4:
    // 0x19c2d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_19c2d8:
    // 0x19c2d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c2dc:
    // 0x19c2dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c2e0:
    // 0x19c2e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c2e4:
    // 0x19c2e4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x19c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_19c2e8:
    // 0x19c2e8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x19c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_19c2ec:
    // 0x19c2ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c2f0:
    // 0x19c2f0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x19c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_19c2f4:
    // 0x19c2f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19c2f8:
    // 0x19c2f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19c2fc:
    if (ctx->pc == 0x19C2FCu) {
        ctx->pc = 0x19C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2F8u;
        // 0x19c2fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C300u;
        goto label_19c300;
    }
    ctx->pc = 0x19C2F8u;
    {
        const bool branch_taken_0x19c2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2F8u;
        // 0x19c2fc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2f8) {
            ctx->pc = 0x19C310u;
            goto label_19c310;
        }
    }
    ctx->pc = 0x19C300u;
label_19c300:
    // 0x19c300: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19c304:
    // 0x19c304: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19c308:
    // 0x19c308: 0x40f809  jalr        $v0
label_19c30c:
    if (ctx->pc == 0x19C30Cu) {
        ctx->pc = 0x19C310u;
        goto label_19c310;
    }
    ctx->pc = 0x19C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C310u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C308u, 0x19C310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C310u;
label_19c310:
    // 0x19c310: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19c310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19c314:
    // 0x19c314: 0xc061a16  jal         func_186858
label_19c318:
    if (ctx->pc == 0x19C318u) {
        ctx->pc = 0x19C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C314u;
        // 0x19c318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C31Cu;
        goto label_19c31c;
    }
    ctx->pc = 0x19C314u;
    SET_GPR_U32(ctx, 31, 0x19C31Cu);
    ctx->pc = 0x19C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C314u;
    // 0x19c318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C314u, 0x19C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C31Cu;
label_19c31c:
    // 0x19c31c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c320:
    // 0x19c320: 0xc06ee66  jal         func_1BB998
label_19c324:
    if (ctx->pc == 0x19C324u) {
        ctx->pc = 0x19C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C320u;
        // 0x19c324: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C328u;
        goto label_19c328;
    }
    ctx->pc = 0x19C320u;
    SET_GPR_U32(ctx, 31, 0x19C328u);
    ctx->pc = 0x19C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C320u;
    // 0x19c324: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x19C320u, 0x19C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C328u;
label_19c328:
    // 0x19c328: 0xc061a16  jal         func_186858
label_19c32c:
    if (ctx->pc == 0x19C32Cu) {
        ctx->pc = 0x19C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C328u;
        // 0x19c32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C330u;
        goto label_19c330;
    }
    ctx->pc = 0x19C328u;
    SET_GPR_U32(ctx, 31, 0x19C330u);
    ctx->pc = 0x19C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C328u;
    // 0x19c32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C328u, 0x19C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C330u;
label_19c330:
    // 0x19c330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c334:
    // 0x19c334: 0xc06eebe  jal         func_1BBAF8
label_19c338:
    if (ctx->pc == 0x19C338u) {
        ctx->pc = 0x19C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C334u;
        // 0x19c338: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C33Cu;
        goto label_19c33c;
    }
    ctx->pc = 0x19C334u;
    SET_GPR_U32(ctx, 31, 0x19C33Cu);
    ctx->pc = 0x19C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C334u;
    // 0x19c338: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x19C334u, 0x19C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C33Cu;
label_19c33c:
    // 0x19c33c: 0xc061a12  jal         func_186848
label_19c340:
    if (ctx->pc == 0x19C340u) {
        ctx->pc = 0x19C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C33Cu;
        // 0x19c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C344u;
        goto label_19c344;
    }
    ctx->pc = 0x19C33Cu;
    SET_GPR_U32(ctx, 31, 0x19C344u);
    ctx->pc = 0x19C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C33Cu;
    // 0x19c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C33Cu, 0x19C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C344u;
label_19c344:
    // 0x19c344: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_19c348:
    // 0x19c348: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x19c348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_19c34c:
    // 0x19c34c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19c34cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19c350:
    // 0x19c350: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19c350u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19c354:
    // 0x19c354: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_19c358:
    // 0x19c358: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c35c:
    // 0x19c35c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c360:
    // 0x19c360: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19c364:
    // 0x19c364: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x19c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19c368:
    // 0x19c368: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19c368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19c36c:
    // 0x19c36c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19c36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19c370:
    // 0x19c370: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19c370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19c374:
    // 0x19c374: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x19c374u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19c378:
    // 0x19c378: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19c378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19c37c:
    // 0x19c37c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x19c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19c380:
    // 0x19c380: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x19c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19c384:
    // 0x19c384: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x19c384u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_19c388:
    // 0x19c388: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19c388u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_19c38c:
    // 0x19c38c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x19c38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_19c390:
    // 0x19c390: 0x46000004  c1          0x4
    ctx->pc = 0x19c390u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_19c394:
    // 0x19c394: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x19c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_19c398:
    // 0x19c398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c39c:
    // 0x19c39c: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_19c3a0:
    if (ctx->pc == 0x19C3A0u) {
        ctx->pc = 0x19C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C39Cu;
        // 0x19c3a0: 0x26830898  addiu       $v1, $s4, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3A4u;
        goto label_19c3a4;
    }
    ctx->pc = 0x19C39Cu;
    {
        const bool branch_taken_0x19c39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C39Cu;
        // 0x19c3a0: 0x26830898  addiu       $v1, $s4, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c39c) {
            ctx->pc = 0x19C434u;
            goto label_19c434;
        }
    }
    ctx->pc = 0x19C3A4u;
label_19c3a4:
    // 0x19c3a4: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
label_19c3a8:
    // 0x19c3a8: 0x8e2208e4  lw          $v0, 0x8E4($s1)
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2276)));
label_19c3ac:
    // 0x19c3ac: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_19c3b0:
    if (ctx->pc == 0x19C3B0u) {
        ctx->pc = 0x19C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3ACu;
        // 0x19c3b0: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3B4u;
        goto label_19c3b4;
    }
    ctx->pc = 0x19C3ACu;
    {
        const bool branch_taken_0x19c3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c3ac) {
            ctx->pc = 0x19C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C3ACu;
            // 0x19c3b0: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C438u;
            goto label_19c438;
        }
    }
    ctx->pc = 0x19C3B4u;
label_19c3b4:
    // 0x19c3b4: 0xc06668e  jal         func_199A38
label_19c3b8:
    if (ctx->pc == 0x19C3B8u) {
        ctx->pc = 0x19C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3B4u;
        // 0x19c3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3BCu;
        goto label_19c3bc;
    }
    ctx->pc = 0x19C3B4u;
    SET_GPR_U32(ctx, 31, 0x19C3BCu);
    ctx->pc = 0x19C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3B4u;
    // 0x19c3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A38u, 0x19C3B4u, 0x19C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3BCu;
label_19c3bc:
    // 0x19c3bc: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_19c3c0:
    if (ctx->pc == 0x19C3C0u) {
        ctx->pc = 0x19C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3BCu;
        // 0x19c3c0: 0x26830898  addiu       $v1, $s4, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3C4u;
        goto label_19c3c4;
    }
    ctx->pc = 0x19C3BCu;
    {
        const bool branch_taken_0x19c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3BCu;
        // 0x19c3c0: 0x26830898  addiu       $v1, $s4, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3bc) {
            ctx->pc = 0x19C434u;
            goto label_19c434;
        }
    }
    ctx->pc = 0x19C3C4u;
label_19c3c4:
    // 0x19c3c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c3c8:
    // 0x19c3c8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x19c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_19c3cc:
    // 0x19c3cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19c3d0:
    // 0x19c3d0: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x19c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_19c3d4:
    // 0x19c3d4: 0x24840904  addiu       $a0, $a0, 0x904
    ctx->pc = 0x19c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2308));
label_19c3d8:
    // 0x19c3d8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_19c3dc:
    if (ctx->pc == 0x19C3DCu) {
        ctx->pc = 0x19C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3D8u;
        // 0x19c3dc: 0xae2208e4  sw          $v0, 0x8E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C3E0u;
        goto label_19c3e0;
    }
    ctx->pc = 0x19C3D8u;
    {
        const bool branch_taken_0x19c3d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3D8u;
        // 0x19c3dc: 0xae2208e4  sw          $v0, 0x8E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3d8) {
            ctx->pc = 0x19C3F4u;
            goto label_19c3f4;
        }
    }
    ctx->pc = 0x19C3E0u;
label_19c3e0:
    // 0x19c3e0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x19c3e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19c3e4:
    // 0x19c3e4: 0x0  nop
    ctx->pc = 0x19c3e4u;
    // NOP
label_19c3e8:
    // 0x19c3e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19c3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19c3ec:
    // 0x19c3ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_19c3f0:
    if (ctx->pc == 0x19C3F0u) {
        ctx->pc = 0x19C3F4u;
        goto label_19c3f4;
    }
    ctx->pc = 0x19C3ECu;
    {
        const bool branch_taken_0x19c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c3ec) {
            ctx->pc = 0x19C410u;
            goto label_19c410;
        }
    }
    ctx->pc = 0x19C3F4u;
label_19c3f4:
    // 0x19c3f4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x19c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_19c3f8:
    // 0x19c3f8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x19c3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_19c3fc:
    // 0x19c3fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19c400:
    // 0x19c400: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19c400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19c404:
    // 0x19c404: 0x0  nop
    ctx->pc = 0x19c404u;
    // NOP
label_19c408:
    // 0x19c408: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19c408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19c40c:
    // 0x19c40c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19c40cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19c410:
    // 0x19c410: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19c410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19c414:
    // 0x19c414: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19c414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19c418:
    // 0x19c418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c41c:
    // 0x19c41c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_19c420:
    // 0x19c420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c424:
    // 0x19c424: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19c424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19c428:
    // 0x19c428: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19c428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19c42c:
    // 0x19c42c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c430:
    // 0x19c430: 0x26830898  addiu       $v1, $s4, 0x898
    ctx->pc = 0x19c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2200));
label_19c434:
    // 0x19c434: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x19c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_19c438:
    // 0x19c438: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x19c438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19c43c:
    // 0x19c43c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19c440:
    if (ctx->pc == 0x19C440u) {
        ctx->pc = 0x19C444u;
        goto label_19c444;
    }
    ctx->pc = 0x19C43Cu;
    {
        const bool branch_taken_0x19c43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c43c) {
            ctx->pc = 0x19C45Cu;
            goto label_19c45c;
        }
    }
    ctx->pc = 0x19C444u;
label_19c444:
    // 0x19c444: 0xc061a16  jal         func_186858
label_19c448:
    if (ctx->pc == 0x19C448u) {
        ctx->pc = 0x19C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C444u;
        // 0x19c448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C44Cu;
        goto label_19c44c;
    }
    ctx->pc = 0x19C444u;
    SET_GPR_U32(ctx, 31, 0x19C44Cu);
    ctx->pc = 0x19C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C444u;
    // 0x19c448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C444u, 0x19C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C44Cu;
label_19c44c:
    // 0x19c44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c450:
    // 0x19c450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c454:
    // 0x19c454: 0x10000005  b           . + 4 + (0x5 << 2)
label_19c458:
    if (ctx->pc == 0x19C458u) {
        ctx->pc = 0x19C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C454u;
        // 0x19c458: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C45Cu;
        goto label_19c45c;
    }
    ctx->pc = 0x19C454u;
    {
        const bool branch_taken_0x19c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C454u;
        // 0x19c458: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c454) {
            ctx->pc = 0x19C46Cu;
            goto label_19c46c;
        }
    }
    ctx->pc = 0x19C45Cu;
label_19c45c:
    // 0x19c45c: 0xc061a16  jal         func_186858
label_19c460:
    if (ctx->pc == 0x19C460u) {
        ctx->pc = 0x19C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C45Cu;
        // 0x19c460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C464u;
        goto label_19c464;
    }
    ctx->pc = 0x19C45Cu;
    SET_GPR_U32(ctx, 31, 0x19C464u);
    ctx->pc = 0x19C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C45Cu;
    // 0x19c460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C45Cu, 0x19C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C464u;
label_19c464:
    // 0x19c464: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19c464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19c468:
    // 0x19c468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c46c:
    // 0x19c46c: 0xc061a16  jal         func_186858
label_19c470:
    if (ctx->pc == 0x19C470u) {
        ctx->pc = 0x19C474u;
        goto label_19c474;
    }
    ctx->pc = 0x19C46Cu;
    SET_GPR_U32(ctx, 31, 0x19C474u);
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C46Cu, 0x19C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C474u;
label_19c474:
    // 0x19c474: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19c478:
    // 0x19c478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c47c:
    // 0x19c47c: 0x0  nop
    ctx->pc = 0x19c47cu;
    // NOP
label_19c480:
    // 0x19c480: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19c480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19c484:
    // 0x19c484: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x19c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_19c488:
    // 0x19c488: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x19c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_19c48c:
    // 0x19c48c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_19c490:
    if (ctx->pc == 0x19C490u) {
        ctx->pc = 0x19C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C48Cu;
        // 0x19c490: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C494u;
        goto label_19c494;
    }
    ctx->pc = 0x19C48Cu;
    {
        const bool branch_taken_0x19c48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c48c) {
            ctx->pc = 0x19C490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C48Cu;
            // 0x19c490: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C4B0u;
            goto label_19c4b0;
        }
    }
    ctx->pc = 0x19C494u;
label_19c494:
    // 0x19c494: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c498:
    // 0x19c498: 0xc095368  jal         func_254DA0
label_19c49c:
    if (ctx->pc == 0x19C49Cu) {
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C498u;
        // 0x19c49c: 0x8c441004  lw          $a0, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4A0u;
        goto label_19c4a0;
    }
    ctx->pc = 0x19C498u;
    SET_GPR_U32(ctx, 31, 0x19C4A0u);
    ctx->pc = 0x19C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C498u;
    // 0x19c49c: 0x8c441004  lw          $a0, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x19C498u, 0x19C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4A0u;
label_19c4a0:
    // 0x19c4a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c4a4:
    // 0x19c4a4: 0xc06fb38  jal         func_1BECE0
label_19c4a8:
    if (ctx->pc == 0x19C4A8u) {
        ctx->pc = 0x19C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4A4u;
        // 0x19c4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4ACu;
        goto label_19c4ac;
    }
    ctx->pc = 0x19C4A4u;
    SET_GPR_U32(ctx, 31, 0x19C4ACu);
    ctx->pc = 0x19C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4A4u;
    // 0x19c4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x19C4A4u, 0x19C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4ACu;
label_19c4ac:
    // 0x19c4ac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x19c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_19c4b0:
    // 0x19c4b0: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x19c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_19c4b4:
    // 0x19c4b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19c4b8:
    if (ctx->pc == 0x19C4B8u) {
        ctx->pc = 0x19C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4B4u;
        // 0x19c4b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4BCu;
        goto label_19c4bc;
    }
    ctx->pc = 0x19C4B4u;
    {
        const bool branch_taken_0x19c4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4B4u;
        // 0x19c4b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4b4) {
            ctx->pc = 0x19C4C8u;
            goto label_19c4c8;
        }
    }
    ctx->pc = 0x19C4BCu;
label_19c4bc:
    // 0x19c4bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c4c0:
    // 0x19c4c0: 0xc06fb64  jal         func_1BED90
label_19c4c4:
    if (ctx->pc == 0x19C4C4u) {
        ctx->pc = 0x19C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4C0u;
        // 0x19c4c4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4C8u;
        goto label_19c4c8;
    }
    ctx->pc = 0x19C4C0u;
    SET_GPR_U32(ctx, 31, 0x19C4C8u);
    ctx->pc = 0x19C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4C0u;
    // 0x19c4c4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x19C4C0u, 0x19C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4C8u;
label_19c4c8:
    // 0x19c4c8: 0xc061a12  jal         func_186848
label_19c4cc:
    if (ctx->pc == 0x19C4CCu) {
        ctx->pc = 0x19C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4C8u;
        // 0x19c4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4D0u;
        goto label_19c4d0;
    }
    ctx->pc = 0x19C4C8u;
    SET_GPR_U32(ctx, 31, 0x19C4D0u);
    ctx->pc = 0x19C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4C8u;
    // 0x19c4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C4C8u, 0x19C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4D0u;
label_19c4d0:
    // 0x19c4d0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19c4d4:
    // 0x19c4d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c4d8:
    // 0x19c4d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19c4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c4dc:
    // 0x19c4dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19c4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c4e0:
    // 0x19c4e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19c4e4:
    // 0x19c4e4: 0x40f809  jalr        $v0
label_19c4e8:
    if (ctx->pc == 0x19C4E8u) {
        ctx->pc = 0x19C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4E4u;
        // 0x19c4e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4ECu;
        goto label_19c4ec;
    }
    ctx->pc = 0x19C4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C4ECu);
        ctx->pc = 0x19C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4E4u;
        // 0x19c4e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C4E4u, 0x19C4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C4ECu;
label_19c4ec:
    // 0x19c4ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19c4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c4f0:
    // 0x19c4f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x19c4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19c4f4:
    // 0x19c4f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19c4f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19c4f8:
    // 0x19c4f8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x19c4f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_19c4fc:
    // 0x19c4fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19c4fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19c500:
    // 0x19c500: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x19c500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_19c504:
    // 0x19c504: 0x3e00008  jr          $ra
label_19c508:
    if (ctx->pc == 0x19C508u) {
        ctx->pc = 0x19C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C504u;
        // 0x19c508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C50Cu;
        goto label_19c50c;
    }
    ctx->pc = 0x19C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C504u;
        // 0x19c508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C50Cu;
label_19c50c:
    // 0x19c50c: 0x0  nop
    ctx->pc = 0x19c50cu;
    // NOP
    ctx->pc = 0x19c510u;
}
