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

// Function: sub_0020A8D8
// Address: 0x20a8d8 - 0x20aa18
void sub_0020A8D8_0x20a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A8D8_0x20a8d8");
#endif

    switch (ctx->pc) {
        case 0x20a994u: goto label_20a994;
        case 0x20a9e8u: goto label_20a9e8;
        default: break;
    }

    ctx->pc = 0x20a8d8u;

    // 0x20a8d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20a8dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a8e0: 0x8c629494  lw          $v0, -0x6B6C($v1)
    ctx->pc = 0x20a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9494u));
    // 0x20a8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a8e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20a8ec: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x20a8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x20a8f0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x20A8F0u;
    {
        const bool branch_taken_0x20a8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8F0u;
        // 0x20a8f4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8f0) {
            ctx->pc = 0x20A9E8u;
            goto label_20a9e8;
        }
    }
    ctx->pc = 0x20A8F8u;
    // 0x20a8f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20a8fc: 0x8c47bd50  lw          $a3, -0x42B0($v0)
    ctx->pc = 0x20a8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x20a900: 0x10e00039  beqz        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x20A900u;
    {
        const bool branch_taken_0x20a900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A900u;
        // 0x20a904: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a900) {
            ctx->pc = 0x20A9E8u;
            goto label_20a9e8;
        }
    }
    ctx->pc = 0x20A908u;
    // 0x20a908: 0x8c629484  lw          $v0, -0x6B7C($v1)
    ctx->pc = 0x20a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939780)));
    // 0x20a90c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x20a90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20a910: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20A910u;
    {
        const bool branch_taken_0x20a910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A910u;
        // 0x20a914: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a910) {
            ctx->pc = 0x20A94Cu;
            goto label_20a94c;
        }
    }
    ctx->pc = 0x20A918u;
    // 0x20a918: 0x8d029498  lw          $v0, -0x6B68($t0)
    ctx->pc = 0x20a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939800)));
    // 0x20a91c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20a91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20a920: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20A920u;
    {
        const bool branch_taken_0x20a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A920u;
        // 0x20a924: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a920) {
            ctx->pc = 0x20A9E8u;
            goto label_20a9e8;
        }
    }
    ctx->pc = 0x20A928u;
    // 0x20a928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a92c: 0x8c469490  lw          $a2, -0x6B70($v0)
    ctx->pc = 0x20a92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x20a930: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x20a930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x20a934: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20a934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20a938: 0xad039498  sw          $v1, -0x6B68($t0)
    ctx->pc = 0x20a938u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294939800), GPR_U32(ctx, 3));
    // 0x20a93c: 0xae069494  sw          $a2, -0x6B6C($s0)
    ctx->pc = 0x20a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939796), GPR_U32(ctx, 6));
    // 0x20a940: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x20a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x20a944: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20A944u;
    {
        const bool branch_taken_0x20a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A944u;
        // 0x20a948: 0x24a50df0  addiu       $a1, $a1, 0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a944) {
            ctx->pc = 0x20A98Cu;
            goto label_20a98c;
        }
    }
    ctx->pc = 0x20A94Cu;
label_20a94c:
    // 0x20a94c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20a950: 0x8c629488  lw          $v0, -0x6B78($v1)
    ctx->pc = 0x20a950u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9488u));
    // 0x20a954: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x20a954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20a958: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A958u;
    {
        const bool branch_taken_0x20a958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A958u;
        // 0x20a95c: 0x8d029498  lw          $v0, -0x6B68($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a958) {
            ctx->pc = 0x20A99Cu;
            goto label_20a99c;
        }
    }
    ctx->pc = 0x20A960u;
    // 0x20a960: 0x1c400022  bgtz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20A960u;
    {
        const bool branch_taken_0x20a960 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A960u;
        // 0x20a964: 0x8e029494  lw          $v0, -0x6B6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a960) {
            ctx->pc = 0x20A9ECu;
            goto label_20a9ec;
        }
    }
    ctx->pc = 0x20A968u;
    // 0x20a968: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20a96c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a970: 0x8c469490  lw          $a2, -0x6B70($v0)
    ctx->pc = 0x20a970u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F9490u));
    // 0x20a974: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x20a974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x20a978: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20a97c: 0xad039498  sw          $v1, -0x6B68($t0)
    ctx->pc = 0x20a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294939800), GPR_U32(ctx, 3));
    // 0x20a980: 0xae069494  sw          $a2, -0x6B6C($s0)
    ctx->pc = 0x20a980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939796), GPR_U32(ctx, 6));
    // 0x20a984: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x20a988: 0x24a50e00  addiu       $a1, $a1, 0xE00
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3584));
label_20a98c:
    // 0x20a98c: 0xc0491ec  jal         func_1247B0
    ctx->pc = 0x20A98Cu;
    SET_GPR_U32(ctx, 31, 0x20A994u);
    ctx->pc = 0x20A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A98Cu;
    // 0x20a990: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247B0u, 0x20A98Cu, 0x20A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A994u;
label_20a994:
    // 0x20a994: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20A994u;
    {
        const bool branch_taken_0x20a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A994u;
        // 0x20a998: 0x8e029494  lw          $v0, -0x6B6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a994) {
            ctx->pc = 0x20A9ECu;
            goto label_20a9ec;
        }
    }
    ctx->pc = 0x20A99Cu;
label_20a99c:
    // 0x20a99c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20a9a0: 0x8c62948c  lw          $v0, -0x6B74($v1)
    ctx->pc = 0x20a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F948Cu));
    // 0x20a9a4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x20a9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20a9a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A9A8u;
    {
        const bool branch_taken_0x20a9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9A8u;
        // 0x20a9ac: 0x8e029494  lw          $v0, -0x6B6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9a8) {
            ctx->pc = 0x20A9ECu;
            goto label_20a9ec;
        }
    }
    ctx->pc = 0x20A9B0u;
    // 0x20a9b0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x20a9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x20a9b4: 0x8cc29498  lw          $v0, -0x6B68($a2)
    ctx->pc = 0x20a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9498u));
    // 0x20a9b8: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A9B8u;
    {
        const bool branch_taken_0x20a9b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B8u;
        // 0x20a9bc: 0x8e029494  lw          $v0, -0x6B6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9b8) {
            ctx->pc = 0x20A9ECu;
            goto label_20a9ec;
        }
    }
    ctx->pc = 0x20A9C0u;
    // 0x20a9c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20a9c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x20a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x20a9c8: 0x8c439490  lw          $v1, -0x6B70($v0)
    ctx->pc = 0x20a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9490u));
    // 0x20a9cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20a9d0: 0xacc09498  sw          $zero, -0x6B68($a2)
    ctx->pc = 0x20a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294939800), GPR_U32(ctx, 0));
    // 0x20a9d4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x20a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x20a9d8: 0xae039494  sw          $v1, -0x6B6C($s0)
    ctx->pc = 0x20a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939796), GPR_U32(ctx, 3));
    // 0x20a9dc: 0x24a50e10  addiu       $a1, $a1, 0xE10
    ctx->pc = 0x20a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3600));
    // 0x20a9e0: 0xc0491ec  jal         func_1247B0
    ctx->pc = 0x20A9E0u;
    SET_GPR_U32(ctx, 31, 0x20A9E8u);
    ctx->pc = 0x20A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A9E0u;
    // 0x20a9e4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247B0u, 0x20A9E0u, 0x20A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9E8u;
label_20a9e8:
    // 0x20a9e8: 0x8e029494  lw          $v0, -0x6B6C($s0)
    ctx->pc = 0x20a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939796)));
label_20a9ec:
    // 0x20a9ec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A9ECu;
    {
        const bool branch_taken_0x20a9ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9ECu;
        // 0x20a9f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9ec) {
            ctx->pc = 0x20A9FCu;
            goto label_20a9fc;
        }
    }
    ctx->pc = 0x20A9F4u;
    // 0x20a9f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A9F4u;
    {
        const bool branch_taken_0x20a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9F4u;
        // 0x20a9f8: 0xae029494  sw          $v0, -0x6B6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9f4) {
            ctx->pc = 0x20AA04u;
            goto label_20aa04;
        }
    }
    ctx->pc = 0x20A9FCu;
label_20a9fc:
    // 0x20a9fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20aa00: 0xac409498  sw          $zero, -0x6B68($v0)
    ctx->pc = 0x20aa00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9498u, _value); } while (0);
label_20aa04:
    // 0x20aa04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20aa04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aa08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20aa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20aa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x20AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA0Cu;
        // 0x20aa10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AA14u;
    // 0x20aa14: 0x0  nop
    ctx->pc = 0x20aa14u;
    // NOP
    ctx->pc = 0x20aa18u;
}
